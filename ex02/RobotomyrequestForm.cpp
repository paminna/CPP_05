//
// Created by Регина on 16.01.2022.
//

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
{
    std::cout << "Constructor for RobotomyrequestForm called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &s)
{
    _target = s._target;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target)
{
    _target = target;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm &r)
{
    _target = r._target;
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "Destructor for RobotomyrequestForm called" << std::endl;
}

//void RobotomyRequestForm::makeSomeNoize(Form &form)
//{
//    if (form.getGradeToSign() < 72 && form.getGradeToExecute() < 45)
//    {
//        std::cout << "Bububu bibibi bububu bibibi" << std::endl;
//        isRobotomized();
//    }
//    else
//        Form::GradeTooLowException();
//}

void RobotomyRequestForm::isRobotomized()
{
    int ran = std::rand();
    if (ran % 2)
        std::cout << _target << " robotomized" << std::endl;
    else
        std::cout << _target << " faled robotomized" << std::endl;
}

void RobotomyRequestForm::execute (Bureaucrat const &executor) const
{
    Form::execute(executor);
    if (form.getGradeToSign() < 72 && form.getGradeToExecute() < 45)
    {
        std::cout << "Bububu bibibi bububu bibibi" << std::endl;
        isRobotomized();
    }
    else
        Form::GradeTooLowException();
}