#include "Ice.hpp"
Ice::Ice()
{
    std::cout << "Ice default constructor called" << std::endl;
    this->type = "ice";
}
Ice::Ice(Ice const &obj)
{
    std::cout << "Ice copy constructor called" << std::endl;
    *this = obj;
}

Ice &Ice::operator=(Ice const &obj)
{
    std::cout << "Ice Assign operator called" << std::endl;
    this->type = obj.type;
    return (*this);
}

Ice::~Ice()
{
    std::cout << "Ice destructor called" << std::endl;
}


AMateria *Ice::clone() const 
{
    Ice *obj = new Ice();
    return obj;
}

void Ice::use(ICharacter &target)
{
    std::cout << "* shoots an ice bolt at "<< target.getName() << " *" << std::endl;
}