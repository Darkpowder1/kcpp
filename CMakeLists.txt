cmake_minimum_required(VERSION 4.3 FATAL_ERROR)
project(main-kcpp)

file(GLOB SOURCES "src/*.cxx")
include_directories(include)

add_executable(Main ${SOURCES})
