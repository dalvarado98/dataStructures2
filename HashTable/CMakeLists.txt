cmake_minimum_required(VERSION 3.12)
project(HashTable)

set(CMAKE_CXX_STANDARD 14)

add_executable(HashTable main.cpp Values.cpp Values.h HashTable.cpp HashTable.h Person.cpp Person.h Manager.cpp Manager.h HashTableClose.cpp HashTableClose.h)