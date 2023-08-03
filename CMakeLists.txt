cmake_minimum_required(VERSION 3.23)
project(labas)

set(CMAKE_CXX_STANDARD 14)

add_executable(labas2 laba7.cpp "laba8 (2).cpp" "hw3.1 (2).cpp" "hw3.1 (2).hpp" "hw3.2 (2).cpp" "laba9 (2).cpp" "laba7(2).c" laba4.cpp laba5.cpp laba6.cpp hw2.1.cpp hw2.2.cpp hw2.3.cpp hw3.1_2.hpp "hw3.1(final).cpp" "hw3.1(final).h" "hw3.1_test(final).h")

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -g")