cmake_minimum_required(VERSION 2.8.4)
project(GoogleTests)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

enable_testing()
find_package(GTest)
find_package(Threads)



add_executable(GoogleTests
	ExampleTest.cpp
	test.cpp
	ExampleTest.h)

target_include_directories(GoogleTests
  PUBLIC ${GTEST_INCLUDE_DIRS}
)

target_link_libraries(GoogleTests
  ${GTEST_BOTH_LIBRARIES}
  Threads::Threads
)


add_test(GoogleTests GoogleTests)
