#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog Constructor called" << std::endl;
    this->type = "Dog";
}

Dog::Dog(Dog const &obj)
{
    std::cout << "Dog copy Constructor called" << std::endl;
    if (this != &obj)
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