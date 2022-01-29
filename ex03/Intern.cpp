//
// Created by Регина on 17.01.2022.
//

#include "Intern.hpp"
#include "string.h"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern()
{
    std::cout << "Constructor for Intern called" << std::endl;
}

Intern::Intern(Intern &intern)
{
    *this = intern;
}

Intern& Intern::operator=(Intern &intern)
{
    (void)intern;
    return (*this);
}

Intern::~Intern()
{
    std::cout << "Destructor for Intern called" << std::endl;
}

Form* Intern::makeForm(std::string nameForm, std::string targetOfForm)
{
    Form *forms[3];

    forms[0] = new PresidentialPardonForm(targetOfForm);
    forms[1] = new ShrubberyCreationForm(targetOfForm);
    forms[2] = new RobotomyRequestForm(targetOfForm);

    std::string arrForms[3] = {"presidential pardon", "shrubbery creation", "robotomy request"};
    for (int i = 0; i < 3; i++) {
        if (arrForms[i] == nameForm)
        {
            switch (i)
            {
                case 0:
                    return forms[i];
                case 1:
                    return forms[i];
                case 2:
                    return forms[i];
                default:
                    break;
            }
        }
    }
    return nullptr;
}