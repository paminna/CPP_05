//
// Created by Регина on 16.01.2022.
//

#include "PresidentalPardonForm.hpp"

PresidentalPardonForm::PresidentalPardonForm()
{
    std::cout << "Constructor for RobotomyrequestForm called" << std::endl;
}

PresidentalPardonForm::PresidentalPardonForm(PresidentalPardonForm &s)
{
    _target = s._target;
}

PresidentalPardonForm::PresidentalPardonForm(std::string target)
{
    _target = target;
}

PresidentalPardonForm &PresidentalPardonForm::operator=(PresidentalPardonForm &)
{
    _target = r._target;
    return *this;
}

PresidentalPardonForm::~PresidentalPardonForm()
{
    std::cout << "Destructor for PresidentalPardonForm called" << std::endl;
}

//void PresidentalPardonForm::isPardoned(Form &form)
//{
//    if (form.getGradeToExecute() < 5 && form.getGradeToSign() < 25)
//        std::cout << _target << " has been pardoned by Zafod Beeblebrox" << std::endl;
//    else
//        Form::GradeTooLowException();
//}

void PresidentalPardonForm::execute (Bureaucrat const &executor) const
{
    Form::execute(executor);
    if (form.getGradeToExecute() < 5 && form.getGradeToSign() < 25)
        std::cout << _target << " has been pardoned by Zafod Beeblebrox" << std::endl;
    else
        Form::GradeTooLowException();
}
