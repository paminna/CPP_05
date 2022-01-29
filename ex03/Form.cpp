//
// Created by Регина on 09.01.2022.
//

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(): _name("noname"), _gradeToSign(0), _gradeToExecute(0) {}

Form::Form(std::string name, int gradeToSign, int gradeToExecute) : _name(name), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
    _isSigned = false;
    if (_gradeToExecute < 1 || _gradeToSign < 1)
        throw Form::GradeTooHighException();
    else if (_gradeToSign > 150 || _gradeToExecute > 150)
        throw Form::GradeTooLowException();
}

Form::Form(Form &form): _name(form._name), _gradeToSign(form._gradeToSign), _gradeToExecute(form._gradeToExecute) {
    *this = form;
}

int Form::getGradeToExecute() const
{
    return _gradeToExecute;
}

int Form::getGradeToSign() const
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

Form::~Form() {}

const char *Form::GradeTooHighException::what() const throw() {
    return "GradeTooHigh";
}

const char *Form::GradeTooLowException::what() const throw() {
    return "GradeTooLow";
}

const char *Form::FormIsNotSigned::what() const throw() {
    return "FormIsNotSigned";
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

void Form::execute (Bureaucrat const &executor) const
{
    if (executor.getGrade() > _gradeToSign)
        throw Form::GradeTooLowException();
    if(!this->_isSigned)
        throw Form::FormIsNotSigned();
}