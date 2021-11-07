#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat  Constructor called" << std::endl;
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
    std::cout << "cat Assign operator called" << std::endl;
    this->type = obj.type;
    this->_brain = obj._brain;
    return (*this);
}
Cat::~Cat()
{
    delete this->_brain;
    std::cout << "cat destuctor called" << std::endl;
}

void Cat::printBrainIdeas(void) const 
{
    this->_brain->printBrainIdeas();
}
void    Cat::setBrainIdeas(std::string idea)
{
    this->_brain->setBrainIdeas(idea);
}


void Cat::makeSound(void) const
{
    std::cout << "Meaw Meaw" << std::endl;
}