#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name(""), _grade(150)
{
    //std::cout << "default Bureaucrat constructor called " << std::endl;
}

Bureaucrat::Bureaucrat(std::string const &name, unsigned int const &grade) : _name(name)
{
    //std::cout << "Bureaucrat parametre  constructor called " << std::endl;
    try
    {
        if (grade < HIGH_GRADE)
            throw GradeTooHighException("the Grade entred for " + _name + "is too High, the range between 1-150.");
        else if (grade > LOW_GRADE)
            throw GradeTooLowException("the Grade entred for " + _name + " is too low,  the range between 1-150.");
        else
            this->_grade = grade;
    }
    catch (const std::exception &e)
    {
        std::cout << "Bureacrate " + _name + " Constructor failed" << std::endl;
        throw;
    }
}

Bureaucrat::Bureaucrat(Bureaucrat const &obj) : _name(obj._name), _grade(obj._grade)
{
    //std::cout << "Bureaucrat copy constructor called " << std::endl;
}

Bureaucrat::~Bureaucrat()
{
    //std::cout << "destructor Bureaucrat called " << std::endl;
}

std::string const &Bureaucrat::getName() const
{
    return (this->_name);
}

unsigned int const &Bureaucrat::getGrade() const
{
    return (this->_grade);
}

void Bureaucrat::incrementGrade()
{
    if (this->_grade == HIGH_GRADE)
        throw GradeTooHighException(this->_name + ", bureaucrat already in Hight Grade: " + std::to_string(_grade));
    this->_grade--;
}

void Bureaucrat::decrementGade()
{
    if (this->_grade == LOW_GRADE)
        throw GradeTooLowException(this->_name + ", bureaucrat already in lower Grade: " + std::to_string(_grade));
    this->_grade++;
}

void Bureaucrat::signForm(Form &form)
{
    try
    {
        form.beSigned(*this);
        std::cout << this->_name << " sign " << form.getName() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << this->_name <<  " cannot sign " << form.getName() << " because " << e.what() << std::endl;
        throw;
    }
    
}


Bureaucrat::GradeTooHighException::GradeTooHighException(std::string const &errorMessage) : _errorMessage(errorMessage)
{
    //std::cout << "GradeTooHighException constructor called " << std::endl;
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    std::string error = std::string("ERROR : ") + _errorMessage;
    return (error.c_str());
}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw()
{
    //std::cout << "GradeTooHighException destructor called " << std::endl;
}

Bureaucrat::GradeTooLowException::GradeTooLowException(std::string const &errorMessage) : _errorMessage(errorMessage)
{
    //std::cout << "GradeTooLowException constructor called " << std::endl;
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    std::string error = std::string("ERROR : ") + _errorMessage;
    return (error.c_str());
}

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw()
{
    //std::cout << "GradeTooLowException destructor called " << std::endl;
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &obj)
{
    os << obj.getName() << ", bureaucrat grade " << obj.getGrade();
    return (os);
}