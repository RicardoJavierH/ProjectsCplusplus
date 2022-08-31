cmake_minimum_required(VERSION 3.10)
project(ThisPointer1)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/cmake_modules" ${CMAKE_MODULE_PATH})

add_executable(ThisPointer1  main.cpp)

target_include_directories(ThisPointer1 PUBLIC ${MKL_INCLUDE})

