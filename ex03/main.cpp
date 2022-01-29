//
// Created by Регина on 09.01.2022.
//

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main()
{
    Intern intern;
    Form* rrf;

    rrf = intern.makeForm("robotomy request", "Michael");
    std::cout<<*rrf<<std::endl;
    delete rrf;
    rrf = intern.makeForm("shrubbery creation", "Jack");
    std::cout<<*rrf<<std::endl;
    delete rrf;
    rrf = intern.makeForm("presidential pardon", "Bob");
    std::cout<<*rrf<<std::endl;
    delete rrf;
    return (0);
}