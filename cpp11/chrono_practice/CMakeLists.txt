cmake_minimum_required(VERSION 3.10)
project(chrono_practice)

set(CMAKE_CXX_STANDARD 11)

add_executable(duration_practice practice_duration.cpp)

add_executable(time_point_practice practice_time_point.cpp)

add_executable(clock_practice practice_clock.cpp)