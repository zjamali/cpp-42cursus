#include "Dog.hpp"

Dog::Dog():Animal("Dog")
{
    std::cout << "Dog Constructor called" << std::endl;
}

Dog::Dog(Dog const &obj):Animal(obj.type)
{
    std::cout << "Dog copy Constructor called" << std::endl;
}

Dog &Dog::operator=(Dog const &obj)
{
    if (this != &obj)
    {
        std::cout << "Dog Assign operator called" << std::endl;
        *((Animal *)this) = obj;
    }
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