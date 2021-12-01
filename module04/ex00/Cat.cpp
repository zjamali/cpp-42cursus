#include "Cat.hpp"

Cat::Cat():Animal("Cat")
{
    std::cout << "Cat Constructor called" << std::endl;
}

Cat::Cat(Cat const &obj):Animal(obj.type)
{
    std::cout << "Cat copy Constructor called" << std::endl;
}

Cat &Cat::operator=(Cat const &obj)
{
    if (this != &obj)
    {
        std::cout << "cat Assign operator called" << std::endl;
        *((Animal *)this) = obj;
    }
    return (*this);
}

Cat::~Cat()
{
    std::cout << "cat destuctor called" << std::endl;
}

void Cat::makeSound(void) const
{
    std::cout << "Meaow Meaow" << std::endl;
}