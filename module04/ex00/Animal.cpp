#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal Default Constructor called" << std::endl;
    this->type = "";
}

Animal::Animal(std::string const type)
{
    std::cout << "Animal Parametre Constructor called" << std::endl;
    this->type = type;
}

Animal::Animal(Animal const &obj) 
{
    std::cout << "Animal copy Constructor called" << std::endl;
    if (this != &obj)
        (*this) = obj;
}
Animal &Animal::operator=(Animal const &obj) 
{
    std::cout << "Animal Assign operator called" << std::endl;
    this->type = obj.type;
    return (*this);
}


Animal::~Animal()
{
    std::cout << "Animal destuctor called" << std::endl;
}

std::string const& Animal::getType(void) const
{
    return (this->type);
}

void Animal::makeSound(void) const
{
    std::cout << "Animal makes sound" << std::endl;
}
