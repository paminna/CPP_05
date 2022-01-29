//
// Created by Регина on 16.01.2022.
//

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
{
    std::cout << "Constructor for ShruberyCreationForm called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string name) : Form(name, 145, 137){}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &s) : Form(s) {}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "Destructor for ShrubberyCreationForm called" << std::endl;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    Form::execute(executor);
    if (this->getGradeToExecute() < 137 && this->getGradeToSign() < 145)
        CreateTree();
    else
        Form::GradeTooLowException();
}

void ShrubberyCreationForm::CreateTree() const
{
    std::ofstream fout("./" + _target);
    fout << "          ^            \n"
            "         /@'\'           \n"
            "        /@@@'\'          \n"
            "       /@@@@@'\'         \n"
            "         |@|           \n";
    fout.close();
}
