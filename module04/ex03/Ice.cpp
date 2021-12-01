#include "Ice.hpp"
Ice::Ice() : AMateria("ice")
{
    //std::cout << "Ice default constructor called" << std::endl;
    this->type = "ice";
}
Ice::Ice(Ice const &obj) : AMateria(obj.type)
{
    // std::cout << "Ice copy constructor called" << std::endl;
}

Ice &Ice::operator=(Ice const &obj) 
{
    if (this != &obj)
    {
        // std::cout << "Ice Assign operator called" << std::endl;
        *((AMateria *)this) = obj;
    }
    return (*this);
}

Ice::~Ice()
{
    // std::cout << "Ice destructor called" << std::endl;
}

AMateria *Ice::clone() const
{
    return (new Ice(*this));
}

void Ice::use(ICharacter &target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}