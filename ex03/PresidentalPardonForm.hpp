//
// Created by Регина on 16.01.2022.
//

#ifndef CPP_05_PRESIDENTALPARDONFORM_HPP
#define CPP_05_PRESIDENTALPARDONFORM_HPP

#include "Form.hpp"
#include <iostream>

class PresidentalPardonForm {
public:
    PresidentalPardonForm();
    PresidentalPardonForm(PresidentalPardonForm &);
    PresidentalPardonForm(std::string target);
    PresidentalPardonForm &operator=(PresidentalPardonForm &);
    ~PresidentalPardonForm();
    void isPardoned(Form &form);
    void execute (Bureaucrat const &executor) const;
private:
    int _target;
};


#endif //CPP_05_PRESIDENTALPARDONFORM_HPP
