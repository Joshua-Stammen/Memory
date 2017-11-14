cmake_minimum_required(VERSION 3.8)
project(Memory)

set(CMAKE_CXX_STANDARD 11)

#set(SOURCE_FILES main.cpp)
#set(SOURCE_FILES strclass.cpp MyString.cpp MyString.h)
#set(SOURCE_FILES dyamnicIntArray.cpp)
#set(SOURCE_FILES Exception1.cpp)
#set(SOURCE_FILES DistanceException.cpp Distance.cpp Distance.h )
#set(SOURCE_FILES cons.cpp)
set(SOURCE_FILES Freestore.cpp Resource.cpp Resource.h)
add_executable(Memory ${SOURCE_FILES})