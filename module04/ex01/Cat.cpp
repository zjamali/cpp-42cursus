#include "Cat.hpp"

Cat::Cat()
{
     std::cout << "Cat Default Constructor called" << std::endl;
    this->type = "Cat";
}

Cat::Cat(std::string type)
{
    std::cout << "Cat Parametre Constructor called" << std::endl;
    this->type = type;
}

Cat::Cat(Cat const &obj)
{
    std::cout << "Cat copy Constructor called" << std::endl;
    (*this) = obj;
}

Cat &Cat::operator=(Cat const &obj) 
{
    std::cout << "cat Assign operator called" << std::endl;
    this->type = obj.type;
    return (*this);
}
Cat::~Cat()
{
    std::cout << "cat destuctor called" << std::endl;
}


void Cat::makeSound(void) const
{
    std::cout << "Meaow" << std::endl;
}