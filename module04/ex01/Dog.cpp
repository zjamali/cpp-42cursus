#include "Dog.hpp"

Dog::Dog():Animal("Dog"), _brain(new Brain)
{
    std::cout << "Dog Constructor called" << std::endl;
}

Dog::Dog(Dog const &obj):Animal(obj.type), _brain(nullptr)
{
    std::cout << "Dog copy Constructor called" << std::endl;
    *this = obj;
}

Dog &Dog::operator=(Dog const &obj)
{
    if (this != &obj)
    {
        std::cout << "Dog Assign operator called" << std::endl;
        *((Animal *)this) = obj;
        delete this->_brain;
        this->_brain = nullptr;
        if (obj._brain != nullptr)
            this->_brain = new Brain(*(obj._brain));
    }
    return (*this);
}

Dog::~Dog()
{
    std::cout << "Dog destuctor called" << std::endl;
    delete this->_brain;
}

void Dog::makeSound(void) const
{
    std::cout << "woof woof" << std::endl;
}