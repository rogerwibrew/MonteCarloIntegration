cmake_minimum_required(VERSION 2.8)
project(MonteCarlo2)

# set(CMAKE_CXX_STANDARD 11)

SET(CMAKE_CXX_FLAGS "-std=c++11")

include_directories(include)

file(GLOB SOURCES "src/*.cpp")

add_executable(MonteCarlo2 ${SOURCES})