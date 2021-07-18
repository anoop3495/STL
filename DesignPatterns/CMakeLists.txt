cmake_minimum_required(VERSION 2.8.4)
project(DesignPatterns)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES IteratorPattern.cpp
	Pattern_source.cpp
	Visitor_pattern.cpp
	Adaptor.cpp
	Adaptor.h
	IteratorPattern.h
	Visitor_pattern.h)
add_executable(Pattern_source ${SOURCE_FILES})