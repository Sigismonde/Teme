cmake_minimum_required(VERSION 3.10)
project(Nave VERSION 1.0)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
add_executable(exe main.cpp)
add_subdirectory(Vehicul)
target_link_libraries(exe PUBLIC Avion Vapor)