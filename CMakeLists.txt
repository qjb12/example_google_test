# CMakeLists.txt
cmake_minimum_required(VERSION 3.10)

set(This main)

project(${This} C CXX)

set(CMAKE_C_STANDARD 99)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

enable_testing()

add_subdirectory(googletest)

set(Headers
    math.hpp
    arithmetic.hpp
)

set(Sources
    main.cpp
    math.cpp
    arithmetic.cpp
)

include_directories(${PROJECT_SOURCE_DIR})

add_library(${This} STATIC ${Sources} ${Headers})

add_executable(primary main.cpp math.cpp math.hpp arithmetic.cpp arithmetic.hpp) 

add_subdirectory(test)