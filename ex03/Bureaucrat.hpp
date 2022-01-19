//
// Created by Регина on 09.01.2022.
//

#ifndef CPP_05_BUREAUCRAT_HPP
#define CPP_05_BUREAUCRAT_HPP


#include <iostream>

class Bureaucrat {
public:
    Bureaucrat();
    Bureaucrat(const std::string &name, int grade);
    Bureaucrat(Bureaucrat &b);
    Bureaucrat &operator=(const Bureaucrat &b);
    ~Bureaucrat();
    std::string getName() const;
    int getGrade() const;
    void incrementGrade();
    void decrementGrade();
    struct GradeTooHighException : public  std::exception
    {
        const char *what() const throw();
    };

    struct GradeTooLowException : public  std::exception
    {
        const char *what() const throw();
    };
    void executingForm(Form const &form);
private:
    const std::string _name;
    int _grade;
};


std::ostream& operator<< (std::ostream &out, const Bureaucrat &b);

#endif //CPP_05_BUREAUCRAT_HPP
