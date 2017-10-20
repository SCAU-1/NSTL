cmake_minimum_required(VERSION 3.2)
project(NSTL_)
set(CMAKE_CXX_STANDARD 11)
add_definitions(-DWINVER=0x0500)

add_subdirectory(gtest)
include_directories(include)

AUX_SOURCE_DIRECTORY(test DIR_SRCS)
AUX_SOURCE_DIRECTORY(test/common DIR_SRCS)
AUX_SOURCE_DIRECTORY(test/sample DIR_SRCS)
cxx_executable(NSTL test gtest_main ${DIR_SRCS} )
