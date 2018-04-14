cmake_minimum_required(VERSION 3.9)
project(arithmeticTest)

set(CMAKE_CXX_STANDARD 11)

add_executable(arithmeticTest main.cpp Student.h SortTestHelper.h SelectionSort.h InsertionSort.h MergeSort.h MaxHeap.h)