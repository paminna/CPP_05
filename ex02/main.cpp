//
// Created by Регина on 09.01.2022.
//

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    Bureaucrat bureaucrat("Bob", 1);
    std::cout << bureaucrat << std::endl;

    ShrubberyCreationForm shrubberyCreationForm("shrubberyCreationForm");
    bureaucrat.signForm(shrubberyCreationForm);
    try { shrubberyCreationForm.execute(bureaucrat); }
    catch (std::exception &e) { std::cout << e.what() << std::endl; }
    try { Bureaucrat bureaucrat1("Henry", 140); shrubberyCreationForm.execute(bureaucrat1); }
    catch (std::exception &e) { std::cout << e.what(); }

    std::cout << std::endl << std::endl;


    RobotomyRequestForm robotomyRequestForm("robotomyRequestForm");
    bureaucrat.signForm(robotomyRequestForm);
    try { robotomyRequestForm.execute(bureaucrat); }
    catch (std::exception &e) { std::cout << e.what() << std::endl; }

    std::cout << std::endl << std::endl;

    PresidentialPardonForm presidentialPardonForm("presidentialPardonForm");
    bureaucrat.signForm(presidentialPardonForm);
    try { Bureaucrat bureaucrat2("Milly", 1); presidentialPardonForm.execute(bureaucrat2); }
    catch (std::exception &e) { std::cout << e.what() << std::endl; }
    std::cout << std::endl << std::endl;
    return 0;
}