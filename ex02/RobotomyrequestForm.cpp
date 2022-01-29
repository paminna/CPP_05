//
// Created by Регина on 16.01.2022.
//

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
{
    std::cout << "Constructor for RobotomyrequestForm called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &s) : Form(s){}

RobotomyRequestForm::RobotomyRequestForm(std::string name) : Form(name, 72, 45){}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm &r)
{
    _target = r._target;
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "Destructor for RobotomyrequestForm called" << std::endl;
}


void RobotomyRequestForm::isRobotomized() const
{
    int ran = std::rand();
    if (ran % 2)
        std::cout << _target << "robotomized" << std::endl;
    else
        std::cout << _target << "faled robotomized" << std::endl;
}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const {
    Form::execute(executor);
    if (this->getGradeToSign() <= 72 && this->getGradeToExecute() <= 45)
    {
        std::cout << "Bububu bibibi bububu bibibi" << std::endl;
        isRobotomized();
    }
    else
        throw Form::GradeTooLowException();
}