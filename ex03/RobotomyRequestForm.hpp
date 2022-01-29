//
// Created by Регина on 16.01.2022.
//

#ifndef CPP_05_ROBOTOMYREQUESTFORM_HPP
#define CPP_05_ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"
#include <iostream>

class RobotomyRequestForm: public Form {
public:
    RobotomyRequestForm();
    RobotomyRequestForm(RobotomyRequestForm &s);
    RobotomyRequestForm(std::string target);
    RobotomyRequestForm &operator=(RobotomyRequestForm &);
    ~RobotomyRequestForm();
    void makeSomeNoize(Form &form);
    void execute (Bureaucrat const &executor) const;
private:
    std::string _target;
    void isRobotomized() const;
};


#endif //CPP_05_ROBOTOMYREQUESTFORM_HPP
