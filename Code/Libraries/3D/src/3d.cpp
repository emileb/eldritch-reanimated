#include "core.h"
#include "3d.h"
#if BUILD_WINDOWS_NO_SDL || USE_DXVK
#include "D3D9/d3d9renderer.h"
#else
#include "GL2/gl2renderer.h"
#endif
#if BUILD_WINDOWS_NO_SDL || USE_DXVK
#ifdef USE_DXVK
IRenderer* CreateD3D9Renderer( class Window* const pWindow, Display* const pDisplay )
#else
IRenderer* CreateD3D9Renderer( HWND hWnd, Display* const pDisplay )
#endif
{
#ifdef USE_DXVK
	return new D3D9Renderer( pWindow, pDisplay );
#else
	return new D3D9Renderer( hWnd, pDisplay );
#endif
}
#else

IRenderer* CreateGL2Renderer( Window* const pWindow, Display* const pDisplay )
{
	return new GL2Renderer( pWindow, pDisplay );
}
#endif