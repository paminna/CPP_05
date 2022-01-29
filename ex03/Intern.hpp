//
// Created by Регина on 17.01.2022.
//

#ifndef CPP_05_INTERN_HPP
#define CPP_05_INTERN_HPP

#define presidental pardon 0
#define robotomy request 1
#define shrubbery creation 2

#include "Form.hpp"
#include <iostream>

class Intern {
public:
    Intern();
    Intern(Intern &intern);
    Intern& operator=(Intern &intern);
    ~Intern();
    Form* makeForm(std::string nameForm, std::string targetOfForm);
};


#endif //CPP_05_INTERN_HPP
