#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(Brain const &obj)
{
    std::cout << "Brain copy constructor called" << std::endl;
    (*this) = obj;
}

Brain &Brain::operator=(Brain const &obj)
{
    if (this != &obj)
    {
        std::cout << "Brain assign operator called" << std::endl;
        for (int i = 0; i < 100; i++)
        {
            this->ideas[i] = obj.ideas[i];
        }
    }
    return (*this);
}

Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
}
