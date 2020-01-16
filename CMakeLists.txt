# cmake_minimum_required(VERSION <specify CMake version here>)
cmake_minimum_required(VERSION 3.8)

project(BaseTestProject)
set(CMAKE_CXX_STANDARD 14)

add_executable(BaseTestProject main.cpp test.h test.cpp student/Student.cpp student/Student.h course/course.cpp course/course.h)



