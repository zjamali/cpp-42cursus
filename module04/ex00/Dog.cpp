#include "Dog.hpp"

Dog::Dog()
{
     std::cout << "Dog Default Constructor called" << std::endl;
    this->type = "Dog";
}

Dog::Dog(std::string type)
{
    std::cout << "Dog Parametre Constructor called" << std::endl;
    this->type = type;
}

Dog::Dog(Dog const &obj)
{
    std::cout << "Dog copy Constructor called" << std::endl;
    (*this) = obj;
}

Dog &Dog::operator=(Dog const &obj) 
{
    std::cout << "Dog Assign operator called" << std::endl;
    this->type = obj.type;
    return (*this);
}

Dog::~Dog()
{
    std::cout << "Dog destuctor called" << std::endl;
}

void Dog::makeSound(void) const
{
    std::cout << "woof woof" << std::endl;
}