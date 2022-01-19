//
// Created by Регина on 17.01.2022.
//

#include "Intern.hpp"
#include "string.h"
#include "Form.hpp"
#include "PresidentalPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern()
{
    std::cout << "Constructor for Intern called" << std::endl;
}

Intern::Intern(Intern &intern)
{

}

Intern& Intern::operator=(Intern &intern)
{

}

Intern::~Intern()
{
    std::cout << "Destructor for Intern called" << std::endl;
}

Form* Intern::makeForm(std::string nameForm, std::string targetOfForm)
{
    if (strcmp(nameForm, "presidental pardon") == 0)
        PresidentalPardonForm::execute(*this);
    else if (strcmp(nameForm, "robotomy request") == 0)
        RobotomyRequestForm::execute(*this);
    else if (strcmp(nameForm, "shrubbery creation") == 0)
        ShrubberyCreationForm::execute(*this);
    else
        std::cout << "Don't know this request" << std::endl;
}