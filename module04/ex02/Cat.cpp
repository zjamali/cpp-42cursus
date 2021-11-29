#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat Constructor called" << std::endl;
    this->type = "Cat";
    this->_brain = new Brain();
}

Cat::Cat(Cat const &obj)
{
    std::cout << "Cat copy Constructor called" << std::endl;
    (*this) = obj;
}

Cat &Cat::operator=(Cat const &obj)
{
    if (this != &obj)
    {
        std::cout << "cat Assign operator called" << std::endl;
        this->type = obj.type;
        if (obj._brain != nullptr)
        {
            delete this->_brain;
            this->_brain = new Brain(*(obj._brain));
        }
    }
    return (*this);
}

Cat::~Cat()
{
    std::cout << "cat destuctor called" << std::endl;
    delete this->_brain;
    _brain = nullptr;
}

void Cat::makeSound(void) const
{
    std::cout << "Meaow Meaow" << std::endl;
}
