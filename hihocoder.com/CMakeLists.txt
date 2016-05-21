cmake_minimum_required(VERSION 3.5)
project(hihocoder_com)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp ClassTest.cpp ClassTest.h)
add_executable(hihocoder_com ${SOURCE_FILES})