cmake_minimum_required(VERSION 3.10)
project(PlantillaDeClase)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/cmake_modules" ${CMAKE_MODULE_PATH})

add_executable(PlantillaDeClase  main.cpp)

target_include_directories(PlantillaDeClase PUBLIC ${MKL_INCLUDE})

