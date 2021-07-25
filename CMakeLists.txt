cmake_minimum_required(VERSION 3.10)
project(STL)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

add_subdirectory(C++)
add_subdirectory(SolidPrinciples)
add_subdirectory(DesignPatterns)
add_subdirectory(GoogleTests)