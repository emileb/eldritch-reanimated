cmake_minimum_required(VERSION 2.6)

include_directories(src)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -DWITH_SDL2_STATIC")

set(soloud_src
src/audiosource/wav/stb_vorbis.h
src/backend/sdl2_static/soloud_sdl2_static.cpp
#src/backend/openal/soloud_openal_dll.c
#src/backend/openal/soloud_openal.cpp
src/core/soloud.cpp
src/core/soloud_audiosource.cpp
src/core/soloud_bus.cpp
src/core/soloud_core_3d.cpp
src/core/soloud_core_basicops.cpp
src/core/soloud_core_faderops.cpp
src/core/soloud_core_filterops.cpp
src/core/soloud_core_getters.cpp
src/core/soloud_core_setters.cpp
src/core/soloud_core_voicegroup.cpp
src/core/soloud_core_voiceops.cpp
src/core/soloud_fader.cpp
src/core/soloud_fft.cpp
src/core/soloud_fft_lut.cpp
src/core/soloud_file.cpp
src/core/soloud_filter.cpp
src/core/soloud_thread.cpp
src/filter/soloud_bassboostfilter.cpp
src/filter/soloud_biquadresonantfilter.cpp
src/filter/soloud_dcremovalfilter.cpp
src/filter/soloud_echofilter.cpp
src/filter/soloud_fftfilter.cpp
src/filter/soloud_flangerfilter.cpp
src/filter/soloud_lofifilter.cpp
src/soloud.h
src/soloud_audiosource.h
src/soloud_bassboostfilter.h
src/soloud_biquadresonantfilter.h
src/soloud_bus.h
src/soloud_c.h
src/soloud_dcremovalfilter.h
src/soloud_echofilter.h
src/soloud_error.h
src/soloud_fader.h
src/soloud_fft.h
src/soloud_fftfilter.h
src/soloud_file.h
src/soloud_file_hack_off.h
src/soloud_file_hack_on.h
src/soloud_filter.h
src/soloud_flangerfilter.h
src/soloud_internal.h
src/soloud_lofifilter.h
src/soloud_thread.h
src/soloud_wav.h
src/soloud_wavstream.h
src/audiosource/wav/soloud_wav.cpp
src/audiosource/wav/soloud_wavstream.cpp
src/audiosource/wav/stb_vorbis.c
)

add_library(SoLoud ${soloud_src})
target_link_libraries(SoLoud pthread)