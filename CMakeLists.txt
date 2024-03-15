cmake_minimum_required(VERSION 3.20)
project(dt)


set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


find_package(Boost 1.82.0 REQUIRED COMPONENTS program_options json)
message(${Boost_INCLUDE_DIRS})
include_directories(${Boost_INCLUDE_DIRS})
add_executable(bj main.cpp jsontools.cpp)
target_compile_options(bj PRIVATE -O3) #tail recursion

TARGET_LINK_LIBRARIES(bj ${Boost_LIBRARIES})
