#include "Brain.hpp"

Brain::Brain()
{
    counter = 0;
    std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(Brain const &obj)
{
    std::cout << "Brain copy constructor called" << std::endl;
    (*this) = obj; 
}

Brain &Brain::operator=(Brain const &obj)
{
    std::cout << "Brain assign operator called" << std::endl;
    for (int i = 0 ; i < 100 ; i++)
    {
        this->ideas[i] = obj.ideas[i];
    }
    this->counter = obj.counter;
    return(*this);
}
Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;   
}

void    Brain::printBrainIdeas(void) const 
{
    for(int i = 0; i < counter ; i++)
    {
        std::cout << this->ideas[i] << std::endl;
    }
}

void    Brain::setBrainIdeas(std::string idea)
{
    this->ideas[counter] = idea;
    counter++;
    if (counter == 100)
        counter = 0;
}