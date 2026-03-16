cmake_minimum_required(VERSION 3.10.0)

project(dicegame)

#include_directories(include)

file(GLOB SOURCES "*.cpp")
add_executable(${PROJECT_NAME} ${SOURCES})

