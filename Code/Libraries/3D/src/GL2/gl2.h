#ifndef GL2_H
#define GL2_H

#ifndef __SWITCH__
#include "GL/glew.h"
#ifdef WIN32
#include "GL/wglew.h"
#endif
#else
#include <glad/glad.h>  // glad library (OpenGL loader)
#define GL_COMPRESSED_RGBA_S3TC_DXT1_EXT  0x83F1
#define GL_COMPRESSED_RGBA_S3TC_DXT3_EXT  0x83F2
#define GL_COMPRESSED_RGBA_S3TC_DXT5_EXT  0x83F3
#define GL_TEXTURE_MAX_ANISOTROPY_EXT     0x84FE
#define GL_MAX_TEXTURE_MAX_ANISOTROPY_EXT 0x84FF
#define GL_RGBA16F_ARB                    0x881A
#define GL_RGBA32F_ARB                    0x8814
#define GL_COLOR_ATTACHMENT0_EXT GL_COLOR_ATTACHMENT0
#define GL_COLOR_ATTACHMENT1_EXT GL_COLOR_ATTACHMENT1
#define GL_COLOR_ATTACHMENT2_EXT GL_COLOR_ATTACHMENT2
#define GL_COLOR_ATTACHMENT3_EXT GL_COLOR_ATTACHMENT3
#define GLEW_ARB_framebuffer_object 1
#define GLEW_EXT_framebuffer_object 0
#define GLEW_ARB_texture_float 1
#define GLEW_ARB_texture_rg 1
#define GLEW_EXT_texture_compression_s3tc 1
#define glDeleteRenderbuffersEXT
#define glDeleteFramebuffersEXT
#define glGenRenderbuffersEXT
#define GL_RENDERBUFFER_EXT
#define GL_FRAMEBUFFER_EXT
#define glBindRenderbufferEXT(...)
#define glRenderbufferStorageEXT(...)
#define glGenFramebuffersEXT
#define GL_TEXTURE_CUBE_MAP_POSITIVE_X_EXT
#define glBindFramebufferEXT(...)
#define glFramebufferRenderbufferEXT(...)
#define glCheckFramebufferStatusEXT(...) 1
#define GL_FRAMEBUFFER_COMPLETE_EXT GL_FRAMEBUFFER_COMPLETE
#define glFramebufferTexture2DEXT(...)
#endif

#if BUILD_DEV
#define GLERRORCHECK do { const GLenum Error = glGetError(); if( Error == GL_NO_ERROR ) { break; } else { PRINTF( "GL error: 0x%04X\n", Error ); WARNDESC( "GL check" ); } } while(1)
#else
#define GLERRORCHECK DoNothing
#endif

#if BUILD_DEBUG
#define GLPARANOIDERRORCHECK GLERRORCHECK
#else
#define GLPARANOIDERRORCHECK DoNothing
#endif

// Guard structs that save old values and restore when they fall out of scope.
#define GLGUARD_BINDTEXTURE		SGLGuard_BindTexture	AutoGuard_BindTexture
#define GLGUARD_BINDCUBEMAP		SGLGuard_BindCubemap	AutoGuard_BindCubemap
#define GLGUARD_ACTIVETEXTURE	SGLGuard_ActiveTexture	AutoGuard_ActiveTexture

struct SGLGuard_BindTexture
{
	SGLGuard_BindTexture()
	:	m_FormerValue( 0 )
	{
		glGetIntegerv( GL_TEXTURE_BINDING_2D, &m_FormerValue );
	}

	~SGLGuard_BindTexture()
	{
		glBindTexture( GL_TEXTURE_2D, m_FormerValue );
	}

	GLint m_FormerValue;
};

struct SGLGuard_BindCubemap
{
	SGLGuard_BindCubemap()
	:	m_FormerValue( 0 )
	{
		glGetIntegerv( GL_TEXTURE_BINDING_CUBE_MAP, &m_FormerValue );
	}

	~SGLGuard_BindCubemap()
	{
		glBindTexture( GL_TEXTURE_CUBE_MAP, m_FormerValue );
	}

	GLint m_FormerValue;
};

struct SGLGuard_ActiveTexture
{
	SGLGuard_ActiveTexture()
	:	m_FormerValue( 0 )
	{
		glGetIntegerv( GL_ACTIVE_TEXTURE, &m_FormerValue );
	}

	~SGLGuard_ActiveTexture()
	{
		glActiveTexture( m_FormerValue );
	}

	GLint m_FormerValue;
};

#endif // GL2_H