cmake_minimum_required(VERSION 2.6)

include_directories(../Core/src)
include_directories(../Math/src)
include_directories(../Workbench/src)
include_directories(../2D/src)
include_directories(../3D/src)
include_directories(../UI/src/)
include_directories(../Audio/src/)


set(framework_src
src/framework3d.cpp
src/framework3d.h
src/frameworkutil.cpp
src/frameworkutil.h
src/uiinputmapframework.cpp
src/uiinputmapframework.h
src/uimanagerframework.cpp
src/uimanagerframework.h
)

if (USE_DXVK)
	set(CMAKE_CXX_FLAGS "-DUSE_DXVK")
endif()

add_library(Framework ${framework_src})

target_link_libraries(Framework 3D)
target_link_libraries(Framework UI)