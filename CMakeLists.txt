cmake_minimum_required(VERSION 3.3)
project(linearization)

add_compile_options(-Wall -g)

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_DEBUG "${CMAKE_SOURCE_DIR}/build/debug")

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR})

file(GLOB_RECURSE SOURCES src/*.c)

add_executable(linearization ${SOURCES})
target_link_libraries(linearization m)
target_include_directories(linearization PRIVATE src)
