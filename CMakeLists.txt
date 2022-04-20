cmake_minimum_required(VERSION 3.20)
project(DA_project)

set(CMAKE_CXX_STANDARD 14)

add_subdirectory(lib/googletest-master)
include_directories(lib/googletest-master/googletest/include)
include_directories(lib/googletest-master/googlemock/include)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/Tests")

add_executable(DA_project main.cpp Package.h Package.cpp Driver.h Driver.cpp Tests/PackageTests.cpp Tests/DriverTests.cpp AppFunc.cpp AppFunc.h Menu.h Menu.cpp auxiliar.h auxiliar.cpp)

target_link_libraries(DA_project gtest gtest_main)

