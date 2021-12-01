#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>
#include <exception>

#define HIGHT_GRADE 1
#define LOW_GRADE 150

class Bureaucrat
{
private:
    const std::string _name;
    unsigned int _grade;

public:
    Bureaucrat();
    Bureaucrat(std::string const &name, unsigned int const &grade);
    Bureaucrat &operator=(Bureaucrat const &obj);
    ~Bureaucrat();

    std::string const &getName() const;
    unsigned int const &getGrade() const;
    void incrementGrade();
    void decrementGade();
    class GradeTooHighException : public std::exception
    {

        
    };
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& dt);

#endif