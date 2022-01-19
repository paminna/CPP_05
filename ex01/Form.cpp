//
// Created by Регина on 09.01.2022.
//

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(): _gradeToExecute(0), _gradeToSign(0), _name("noname")
{
    _isSigned = false;
    std::cout << "Constructor for Form called" << std::endl;
}

Form::Form(int gradeToSign, int gradeToExecute, std::string name) : _gradeToExecute(gradeToExecute), _gradeToSign(gradeToSign), _name(name)
{
    if (_gradeToExecute < 1 || _gradeToSign < 1)
        throw Form::GradeTooHighException();
    else if (_gradeToSign > 150 || _gradeToExecute > 150)
        throw Form::GradeTooLowException();
}

Form::Form(Form &form) : _gradeToSign(form._gradeToSign), _gradeToExecute(form._gradeToExecute), _name(form._name)
{
    _isSigned = form._isSigned;
}

const int Form::getGradeToExecute()
{
    return _gradeToExecute;
}

const int Form::getGradeToSign()
{
    return _gradeToSign;
}

bool Form::getSigned()
{
    return _isSigned;
}

const std::string Form::getName()
{
    return _name;
}


Form& Form::operator=(const Form &form)
{
    _isSigned = form._isSigned;
    return *this;
}

Form::~Form()
{
    std::cout << "Destructor for Form called" << std::endl;
}

const char *Form::GradeTooHighException::what() const throw() {
    return "GradeTooHigh";
}

const char *Form::GradeTooLowException::what() const throw() {
    return "GradeTooLow";
}


void Form::beSigned(Bureaucrat &bureaucrat)
{
    if (bureaucrat.getGrade() > _gradeToSign)
        throw Form::GradeTooLowException();
    if (_isSigned)
        std::cout << "Form is signed" << std::endl;
    else
        _isSigned = true;
}

std::ostream& operator<< (std::ostream &out, Form form)
{
    out << "Form name " << form.getName() << std::endl;
    out << "Form grade to sign " << form.getGradeToSign() << std::endl;
    out << "Form grade to execute " << form.getGradeToExecute() << std::endl;
    out << "Form is signed " << form.getSigned() << std::endl;
    return out;
}