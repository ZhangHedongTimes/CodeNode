cmake_minimum_required (VERSION 2.6)
project (CopyComplexLinkedList)
SET( SRC_LIST main.cpp
            src/Solution.h
            src/struction.h
            src/Solution.cpp 
			)

add_executable(CopyComplexLinkedList ${SRC_LIST})