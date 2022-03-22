cmake_minimum_required(VERSION 3.21)
project(Lab5)

set(CMAKE_CXX_STANDARD 14)

add_executable(Lab5 main.cpp domain/entity.cpp domain/entity.h domain/repo.cpp domain/repo.h)
