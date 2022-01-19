//
// Created by Регина on 09.01.2022.
//

#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat *bur = new Bureaucrat("John", 3);
        std::cout << bur->getName() << std::endl;
        std::cout << bur->getGrade() << std::endl;
        bur->incrementGrade();
        std::cout << bur->getGrade() << std::endl;
        bur->decrementGrade();
        std::cout << bur->getGrade() << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }

    try
    {
        Bureaucrat *bure = new Bureaucrat("Ron", 151);
        std::cout << bure->getGrade() <<std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }

    try
    {
        Bureaucrat *b = new Bureaucrat("Ron", 0);
        std::cout << b->getGrade() <<std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
}