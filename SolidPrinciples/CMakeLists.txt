cmake_minimum_required(VERSION 2.8.4)
project(SolidPrinciples)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES DependencyPrin.cpp
	InverSionPrin.cpp
	Likovskis.cpp
	OpenClosed.cpp
	SingleResp.cpp
	main_solid.cpp
	DependencyPrin.h
	InverSionPrin.h
	Likovskis.h
	OpenClosed.h
	SingleResp.h)
add_executable(main_solid ${SOURCE_FILES})