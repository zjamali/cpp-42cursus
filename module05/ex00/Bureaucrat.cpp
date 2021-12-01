#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
    std::cout << "default Bureaucrat constructor called " << std::endl;   
}

Bureaucrat::Bureaucrat(std::string const &name, unsigned int const &grade): _name(name)
{
    std::cout <<  "Bureaucrat parametre  constructor called " <<std::endl;
    if (grade < HIGHT_GRADE)
    {

    }
    else
        this->_grade = grade;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &obj)
{
    std::cout << "bureaucrat assign operator called" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "destructor Bureaucrat called " << std::endl;   
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
    this->_grade--;
}

void Bureaucrat::decrementGade()
{
    this->_grade++;
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj)
{
    os << obj.getName() << ", bureaucrat grade " << obj.getGrade() << std::endl;
    return (os);
}