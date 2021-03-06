//
// Created by Регина on 09.01.2022.
//

#ifndef CPP_05_FORM_HPP
#define CPP_05_FORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>

class Form {
public:
    Form();
    Form(int gradeToSign, int gradeToExecute, std::string name);
    Form(Form &form);
    Form &operator=(const Form &form);
    ~Form();

    int getGradeToSign() const;
    bool getSigned();
    const std::string getName();
    int getGradeToExecute() const;
    void beSigned(Bureaucrat &bureaucrat);
    struct GradeTooHighException : public  std::exception
    {
        const char *what() const throw();
    };
    struct GradeTooLowException : public  std::exception
    {
        const char *what() const throw();
    };
private:
    const std::string _name;
    bool _isSigned;
    const int _gradeToSign;
    const int _gradeToExecute;
};

std::ostream& operator<< (std::ostream &out, Form form);

#endif //CPP_05_FORM_HPP
