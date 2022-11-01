cmake_minimum_required(VERSION 3.10)

project(project)

add_compile_options(-g)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_BUILD_TYPE Debug)
set(OpenGL_GL_PREFERENCE GLVND)

file(GLOB SRCS src/*.c)
add_executable(${PROJECT_NAME} ${SRCS})

target_include_directories(
	${PROJECT_NAME} PUBLIC
	${CMAKE_SOURCE_DIR}/include
	${CMAKE_SOURCE_DIR}/lib/flecs/include
	${CMAKE_SOURCE_DIR}/lib/raylib/src
)

add_subdirectory(lib/flecs)
add_subdirectory(lib/raylib)
target_link_libraries(${PROJECT_NAME} PRIVATE flecs raylib)
