#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>
#include <exception>

#define HIGH_GRADE 1
#define LOW_GRADE 150

class Bureaucrat
{
private:
    const std::string _name;
    unsigned int _grade;
    Bureaucrat &operator=(Bureaucrat const &obj);
    Bureaucrat();

public:
    Bureaucrat(std::string const &name, unsigned int const &grade);
    Bureaucrat(Bureaucrat const &obj);
    ~Bureaucrat();

    std::string const &getName() const;
    unsigned int const &getGrade() const;
    void incrementGrade();
    void decrementGade();

    class GradeTooHighException : public std::exception
    {

    public:
        GradeTooHighException();
        ~GradeTooHighException() throw ();

        const char *what() const throw();
    };

    class GradeTooLowException : public std::exception
    {
    public:
        GradeTooLowException();
        ~GradeTooLowException() throw ();

        const char *what() const throw();
    };
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &obj);

#endif