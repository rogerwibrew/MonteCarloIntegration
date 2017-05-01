cmake_minimum_required(VERSION 3.7)
project(MonteCarlo2)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp RandomNumberGenerator.cpp RandomNumberGenerator.h)
add_executable(MonteCarlo2 ${SOURCE_FILES})