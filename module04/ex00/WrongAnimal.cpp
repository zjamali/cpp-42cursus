#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal Default Constructor called" << std::endl;
    this->type = "";
}

WrongAnimal::WrongAnimal(std::string const type)
{
    std::cout << "WrongAnimal Parametre Constructor called" << std::endl;
    this->type = type;
}

WrongAnimal::WrongAnimal(WrongAnimal const &obj) 
{
    std::cout << "WrongAnimal copy Constructor called" << std::endl;
    if (this != &obj)
        (*this) = obj;
}
WrongAnimal &WrongAnimal::operator=(WrongAnimal const &obj) 
{
    std::cout << "WrongAnimal Assign operator called" << std::endl;
    this->type = obj.type;
    return (*this);
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destuctor called" << std::endl;
}

std::string const& WrongAnimal::getType(void) const
{
    return (this->type);
}

void WrongAnimal::makeSound(void) const
{
    std::cout << "WrongAnimal make sound" << std::endl;
}

