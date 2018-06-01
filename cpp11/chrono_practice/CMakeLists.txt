cmake_minimum_required(VERSION 3.5  )
project(chrono_practice)

set(CMAKE_CXX_STANDARD 11)

add_executable(practice_duration practice_duration.cpp)

add_executable(practice_time_point practice_time_point.cpp)

add_executable(practice_clock practice_clock.cpp)