cmake_minimum_required(VERSION 3.5)
project(Scientific_Calculator)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.h main.c integer.c integer.h fraction.c fraction.h matrix.c matrix.h real.c real.h complex.c complex.h)
add_executable(Scientific_Calculator ${SOURCE_FILES})