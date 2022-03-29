cmake_minimum_required(VERSION 3.20)
project(DA_project)

set(CMAKE_CXX_STANDARD 14)

add_executable(DA_project main.cpp Package.h Package.cpp Driver.h Driver.cpp)
