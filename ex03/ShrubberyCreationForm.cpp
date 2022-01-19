//
// Created by Регина on 16.01.2022.
//

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
{
    std::cout << "Constructor for ShruberyCreationForm called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
{
    _target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &s)
{
    _target = s._target;
    return *this;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm &s)
{
    _target = s._target;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "Destructor for ShrubberyCreationForm called" << std::endl;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor)
{
    Form::execute(executor);
    if (form.getGradeToExecute() < 137 && form.getGradeToSign() < 145)
        this->CreateTree();
    else
        Form::GradeTooLowException();
}

void ShrubberyCreationForm::CreateTree()
{
    ofstream fout("./" + _target);
    fout << "          ^            \n"
            "         /@\           \n"
            "        /@@@\          \n"
            "       /@@@@@\         \n"
            "         |@|           \n";
    fout.close();
}
