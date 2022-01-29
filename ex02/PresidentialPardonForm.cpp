//
// Created by Регина on 16.01.2022.
//

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
{
    std::cout << "Constructor for RobotomyrequestForm called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &s) : Form(s){}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form(target, 25, 5){}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm &r)
{
    _target = r._target;
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "Destructor for PresidentalPardonForm called" << std::endl;
}

void PresidentialPardonForm::execute (Bureaucrat const &executor) const
{
    Form::execute(executor);
    if (this->getGradeToExecute() <= 5 && this->getGradeToSign() <= 25)
        std::cout << _target << "has been pardoned by Zafod Beeblebrox" << std::endl;
    else
        throw Form::GradeTooLowException();
}
