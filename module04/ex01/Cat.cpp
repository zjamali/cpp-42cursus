#include "Cat.hpp"

Cat::Cat():Animal("Cat"), _brain(new Brain())
{
    std::cout << "Cat Constructor called" << std::endl;
}

Cat::Cat(Cat const &obj):Animal(obj.type), _brain(nullptr)
{
    std::cout << "Cat copy Constructor called" << std::endl;
    *this = obj;
}

Cat &Cat::operator=(Cat const &obj)
{
    if (this != &obj)
    {
        std::cout << "cat Assign operator called" << std::endl;
        *((Animal *)this) = obj;
        delete this->_brain;
        this->_brain = nullptr;
        if (obj._brain != nullptr)
            this->_brain = new Brain(*(obj._brain));
    }
    return (*this);
}

Cat::~Cat()
{
    std::cout << "cat destuctor called" << std::endl;
    delete this->_brain;
}

void Cat::makeSound(void) const
{
    std::cout << "Meaow Meaow" << std::endl;
}