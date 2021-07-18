cmake_minimum_required(VERSION 2.8.4)
project(C++_Basics)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")


set(SOURCE_FILES Consturctos_initialisation.cpp lamda_functions.cpp 
	MoveSemantics_C++11.cpp 
	Operator_Overloading.cpp 
	Overide_Encapsulation_heap_method.cpp 
	Overide_Encapsulation_stack_method.cpp
	StlVector.cpp
	vector_list_stl.cpp
	Source_main.cpp)
add_executable(Source_main ${SOURCE_FILES})