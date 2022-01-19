//
// Created by Регина on 09.01.2022.
//

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Non")
{
    std::cout << "Constructor for Bureaucrat called" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string &name, int grade): _name(name)
{
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    this->_grade = grade;
    std::cout << "Name and grade given for Bureaucrat" << std::endl;
}

std::string Bureaucrat::getName() const
{
    return _name;
}

int Bureaucrat::getGrade() const
{
    return _grade;
}

Bureaucrat::Bureaucrat(Bureaucrat &b) : _name(b._name)
{
    *this = b;
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat &b)
{
    this->_grade = b.getGrade();
    return *this;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Destructor for Bureaucrat" << std::endl;
}


void Bureaucrat::incrementGrade()
{
    if (_grade - 1 < 1)
        throw Bureaucrat::GradeTooHighException();
    this->_grade -= 1;
}
void Bureaucrat::decrementGrade()
{
    if (_grade + 1 > 150)
        throw Bureaucrat::GradeTooLowException();
    _grade = _grade + 1;
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
    return "GradeTooHigh";
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
    return "GradeTooLow";
}

std::ostream& operator<< (std::ostream &out, const Bureaucrat &b)
{
    out << b.getName() << ", bureaucrat grade " << b.getGrade() << std::endl;
}