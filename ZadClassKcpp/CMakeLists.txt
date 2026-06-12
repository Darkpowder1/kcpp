cmake_minimum_required(VERSION 4.3 FATAL_ERROR)
project(ZadClassKcpp)

file(GLOB SOURCES "src/*.cc")
add_executable(ZadClassKcpp main.cc ${SOURCES})
target_include_directories(ZadClassKcpp PRIVATE include)
