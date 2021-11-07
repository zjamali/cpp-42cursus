#include "Dog.hpp"

Dog::Dog()
{
     std::cout << "Dog  Constructor called" << std::endl;
    this->type = "Dog";
    this->_brain = new Brain();
}

Dog::Dog(Dog const &obj)
{
    std::cout << "Dog copy Constructor called" << std::endl;
    this->type = obj.type;
    this->_brain = new Brain(*(obj._brain));
}

Dog &Dog::operator=(Dog const &obj) 
{
    std::cout << "Dog Assign operator called" << std::endl;
    this->type = obj.type;
    (*this->_brain) = (*obj._brain);
    return (*this);
}

Dog::~Dog()
{
    delete this->_brain;
    std::cout << "Dog destuctor called" << std::endl;
}

void Dog::printBrainIdeas(void) const 
{
    this->_brain->printBrainIdeas();
}

void    Dog::setBrainIdeas(std::string idea)
{
    this->_brain->setBrainIdeas(idea);
}
void Dog::makeSound(void) const
{
    std::cout << "woof woof" << std::endl;
}
