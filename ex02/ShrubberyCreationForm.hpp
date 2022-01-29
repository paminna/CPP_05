//
// Created by Регина on 16.01.2022.
//

#ifndef CPP_05_SHRUBBERYCREATIONFORM_HPP
#define CPP_05_SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm: public Form {
public:
    ShrubberyCreationForm();
    ShrubberyCreationForm(std::string target);
    ShrubberyCreationForm(ShrubberyCreationForm &s);
    ShrubberyCreationForm &operator=(ShrubberyCreationForm &s);
    ~ShrubberyCreationForm();
    void execute (Bureaucrat const &executor) const;
    void execute(Form &form);

    struct FileError: public std::exception {const char * what() const throw(); };
private:
    void CreateTree() const;
    std::string _target;
};


#endif //CPP_05_SHRUBBERYCREATIONFORM_HPP
