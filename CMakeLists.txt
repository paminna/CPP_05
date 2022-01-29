cmake_minimum_required(VERSION 3.17)
project(CPP_05)

set(CMAKE_CXX_STANDARD 98)

add_executable(ex00 ex00/main.cpp ex00/Bureaucrat.cpp)
add_executable(ex01 ex01/main.cpp ex01/Bureaucrat.cpp ex01/Form.cpp)
add_executable(ex02 ex02/main.cpp ex02/Bureaucrat.cpp ex02/Form.cpp ex02/PresidentialPardonForm.cpp ex02/RobotomyRequestForm.cpp ex02/ShrubberyCreationForm.cpp)