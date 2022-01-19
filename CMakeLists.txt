cmake_minimum_required(VERSION 3.17)
project(CPP_05)

set(CMAKE_CXX_STANDARD 98)

add_executable(ex00 ex00/main.cpp ex00/Bureaucrat.cpp)
add_executable(ex01 ex01/main.cpp ex01/Bureaucrat.cpp ex01/Form.cpp)