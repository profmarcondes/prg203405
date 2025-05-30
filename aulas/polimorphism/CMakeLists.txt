cmake_minimum_required(VERSION 3.5.0)

project(shapes)

#include_directories(include)

file(GLOB SOURCES "*.cpp")
add_executable(${PROJECT_NAME} ${SOURCES})

