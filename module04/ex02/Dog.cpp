#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog Constructor called" << std::endl;
    this->type = "Dog";
    this->_brain = new Brain();
}

Dog::Dog(Dog const &obj)
{
    std::cout << "Dog copy Constructor called" << std::endl;
    (*this) = obj;
}

Dog &Dog::operator=(Dog const &obj)
{
    if (this != &obj)
    {
        std::cout << "Dog Assign operator called" << std::endl;
        this->type = obj.type;
        if (obj._brain != nullptr)
        {
            delete this->_brain;
            this->_brain = new Brain(*(obj._brain));
        }
    }
    return (*this);
}

Dog::~Dog()
{
    std::cout << "Dog destuctor called" << std::endl;
    delete _brain;
    _brain = nullptr;
}

void Dog::makeSound(void) const
{
    std::cout << "woof woof" << std::endl;
}