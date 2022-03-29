cmake_minimum_required(VERSION 3.21)
project(Lab5)

set(CMAKE_CXX_STANDARD 14)

add_executable(Lab5 main.cpp domain/entity.cpp domain/entity.h domain/repo.cpp domain/repo.h domain/homemade_vector.cpp domain/homemade_vector.h)

add_executable(Lab5Vector main_vector.cpp domain/entity.cpp domain/entity.h domain/repo.cpp domain/repo.h domain/homemade_vector.cpp domain/homemade_vector.h)

add_executable(Lab5Ref main_reference.cpp domain/entity.cpp domain/entity.h domain/repo.cpp domain/repo.h domain/homemade_vector.cpp domain/homemade_vector.h)
