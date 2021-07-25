cmake_minimum_required(VERSION 2.8.4)
project(GoogleTests)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES 
	ExampleTest.cpp
	test.cpp
	ExampleTest.h)
add_executable(test.cpp ${SOURCE_FILES})