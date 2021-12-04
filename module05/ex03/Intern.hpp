#ifndef INTERN_HPP
#define INTERN_HPP
#include "form.h"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>

class Form;

class Intern
{
private:
    Intern(Intern const &obj);
    Intern &operator=(Intern const &obj);

public:
    Intern();
    ~Intern();

    Form *makeForm(std::string const &formName, std::string const &target);

    class  RequestedformNotknown : public std::exception
    {
    public:
        RequestedformNotknown();
        ~RequestedformNotknown() throw();

        const char *what() const throw();
    };
};

Form *createShrubberyForm(std::string const &target);
Form *createRobotomyRequestForm(std::string const &target);
Form *createPresidentialPardonForm(std::string const &target);

#endif