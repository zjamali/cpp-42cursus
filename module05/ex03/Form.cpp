#include "Form.hpp"

Form::Form() : _name(""), _isSigned(false), _signGrade(150), _executeGrade(150)
{
    //std::cout << "default Form constructor called " << std::endl;
}

Form::Form(std::string const &name, unsigned int const &signGrade, unsigned int const &executeGrade)
    : _name(name), _isSigned(false), _signGrade(signGrade), _executeGrade(executeGrade)
{
    //std::cout << "Form parametre constructor called " << std::endl;
    try
    {
        if (signGrade < HIGH_GRADE || executeGrade < HIGH_GRADE)
            throw GradeTooHighException("the Grades entred for Form " + _name + " is too High, the range between 1-150.");
        else if (signGrade > LOW_GRADE || executeGrade > LOW_GRADE)
            throw GradeTooLowException("the Grade entred for " + _name + " is too low,  the range between 1-150.");
        else
        {
            //std::cout << "Form " + this->_name + " created" << std::endl;
        }
    }
    catch (const std::exception &e)
    {
        std::cout << "Form " + _name + " creation failed" << std::endl;
        throw;
    }
}

Form::Form(Form const &obj)
    : _name(obj._name), _isSigned(obj._isSigned), _signGrade(obj._signGrade), _executeGrade(obj._executeGrade)
{
    //std::cout << "Form copy constructor called " << std::endl;
}

Form::~Form()
{
    //std::cout << "Form destructor called " << std::endl;
}

std::string const &Form::getName() const
{
    return (this->_name);
}
unsigned int const &Form::getSignGrade() const
{
    return (this->_signGrade);
}
unsigned int const &Form::getExecuteGrade() const
{
    return (this->_executeGrade);
}
bool const &Form::getIsSigned() const
{
    return (this->_isSigned);
}

void Form::beSigned(Bureaucrat const &bureaucrat)
{
    if (this->_signGrade <= bureaucrat.getGrade())
        throw GradeTooLowException("Bureaucrat grade is too low to sign the form");
    else
        this->_isSigned = true;
}

Form::GradeTooHighException::GradeTooHighException(std::string const &errorMessage) : _errorMessage(errorMessage)
{
    //std::cout << "GradeTooHighException constructor called " << std::endl;
}

const char *Form::GradeTooHighException::what() const throw()
{
    std::string error = std::string("ERROR : ") + _errorMessage;
    return (error.c_str());
}

Form::GradeTooHighException::~GradeTooHighException() throw()
{
    //std::cout << "GradeTooHighException destructor called " << std::endl;
}

Form::GradeTooLowException::GradeTooLowException(std::string const &errorMessage) : _errorMessage(errorMessage)
{
    //std::cout << "GradeTooLowException constructor called " << std::endl;
}

const char *Form::GradeTooLowException::what() const throw()
{
    return (_errorMessage.c_str());
}

Form::GradeTooLowException::~GradeTooLowException() throw()
{
    //std::cout << "GradeTooLowException destructor called " << std::endl;
}

Form::FormNotSigned::FormNotSigned(std::string const &errorMessage) : _errorMessage(errorMessage)
{
    //std::cout << "Form not Signed constructor called " << std::endl;
}

const char *Form::FormNotSigned::what() const throw()
{
    return (_errorMessage.c_str());
}

Form::FormNotSigned::~FormNotSigned() throw()
{
    //std::cout << "GradeTooLowException destructor called " << std::endl;
}

void Form::execute(Bureaucrat const &executor) const
{
    if (!this->_isSigned)
        throw FormNotSigned("the Form " + _name + " not signed");
    if (executor.getGrade() >= this->getSignGrade())
        throw GradeTooLowException(executor.getName() + " grade is too low to sign " + _name);
    this->action();
}

std::ostream &operator<<(std::ostream &os, const Form &obj)
{
    os << obj.getName() << ", Form signed grade: " << obj.getSignGrade() << " with execute grade : " << obj.getExecuteGrade() << (obj.getIsSigned() == true ?  "signd" : " not signed");
    return (os);
}
