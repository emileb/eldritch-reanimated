cmake_minimum_required(VERSION 2.6)

include_directories(../Math/src)
include_directories(../Core/src)
include_directories(../SoLoud/src)

set(audio_src
src/audio.cpp
src/audio.h
src/audiosystemcommon.cpp
src/audiosystemcommon.h
src/iaudiosystem.h
src/isound.h
src/isoundinstance.h
src/soloudaudiosystem.cpp
src/soloudaudiosystem.h
src/soloudsound.cpp
src/soloudsound.h
src/soloudsoundinstance.cpp
src/soloudsoundinstance.h
src/sound3dlistener.cpp
src/sound3dlistener.h
src/soundcommon.cpp
src/soundcommon.h
src/soundinstancecommon.cpp
src/soundinstancecommon.h
src/soundmanager.cpp
src/soundmanager.h
)
 
add_library(Audio ${audio_src})