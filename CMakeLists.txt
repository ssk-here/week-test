cmake_minimum_required(VERSION 3.28)

project(learn)

set(CMAKE_CXX_COMPILER "/usr/bin/g++")
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

include_directories(${CMAKE_SOURCE_DIR}/include)


message(STATUS "Running cmake on ${CPPFILE}")
add_executable(learn ${CMAKE_SOURCE_DIR}/${CPPFILE})
target_link_libraries(learn gtest gtest_main)

