cmake_minimum_required(VERSION 3.28)
project(VMT_hook_WINx64)

set(CMAKE_CXX_STANDARD 26)

include_directories(include TestClass/BaseClass TestClass/DerivedClass)

add_executable(VMT_hook_WINx64 src/main.cpp TestClass/BaseClass/BaseClass.cpp TestClass/DerivedClass/DerivedClass.cpp)
