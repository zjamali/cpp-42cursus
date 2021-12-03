#ifndef FORM_HPP
#define FORM_HPP
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
    const std::string _name;
    bool _isSigned;
    const unsigned int _signGrade;
    const unsigned int _executeGrade;
    Form &operator=(Form const &obj);

public:
    Form();
    Form(std::string const &name, unsigned int const &_signGrade, unsigned int const &executeGrade);
    Form(Form const &obj);
    ~Form();

    std::string const &getName() const;
    unsigned int const &getSignGrade() const;
    unsigned int const &getExecuteGrade() const;
    bool const &getIsSigned() const;


    void beSigned(Bureaucrat const &bureaucrat);


    class GradeTooHighException : public std::exception
    {
    private:
        std::string _errorMessage;

    public:
        GradeTooHighException(std::string const &errorMessage);
        ~GradeTooHighException() throw();

        const char *what() const throw();
    };

    class GradeTooLowException : public std::exception
    {
    private:
        std::string _errorMessage;

    public:
        GradeTooLowException(std::string const &errorMessage);
        ~GradeTooLowException() throw();

        const char *what() const throw();
    };
};

std::ostream &operator<<(std::ostream &os, const Form &obj);

#endif