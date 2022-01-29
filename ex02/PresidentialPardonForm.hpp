//
// Created by Регина on 16.01.2022.
//

#ifndef CPP_05_PRESIDENTALPARDONFORM_HPP
#define CPP_05_PRESIDENTALPARDONFORM_HPP

#include "Form.hpp"
#include <iostream>

class PresidentialPardonForm: public Form {
public:
    PresidentialPardonForm();
    PresidentialPardonForm(PresidentialPardonForm &);
    PresidentialPardonForm(std::string target);
    PresidentialPardonForm &operator=(PresidentialPardonForm &);
    ~PresidentialPardonForm();
    void isPardoned(Form &form);
    void execute (Bureaucrat const &executor) const;
private:
    std::string _target;
};


#endif //CPP_05_PRESIDENTALPARDONFORM_HPP
