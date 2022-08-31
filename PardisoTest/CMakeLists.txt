cmake_minimum_required (VERSION 3.13)

project (PardCtrl)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

#this allow us to define custom FindXXX.cmake modules
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake/Modules/")

include(cmake/StandardProjectSettings.cmake)

add_executable(pzimp main.cpp)
add_executable(gitimp main_git.cpp)


#set(TOOLS_LIB_TYPE STATIC)
#add_library(Tools ${TOOLS_LIB_TYPE} "")

#enabling MKL library
option(USING_MKL "Whether the MKL library will be linked in" OFF)
if(USING_MKL)
    include(cmake/EnableMKL.cmake)
    enable_mkl(pzimp)
    enable_mkl(gitimp)
endif(USING_MKL)



find_package(Threads)

find_package(TBB)


# Add subdirectories


