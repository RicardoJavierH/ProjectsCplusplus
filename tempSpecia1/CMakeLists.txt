cmake_minimum_required(VERSION 3.10)
project(tempSpecia1)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/cmake_modules" ${CMAKE_MODULE_PATH})

add_executable(tempSpecia1  main.cpp)

target_include_directories(tempSpecia1 PUBLIC ${MKL_INCLUDE})

