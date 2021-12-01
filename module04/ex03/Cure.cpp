#include "Cure.hpp"

Cure::Cure():AMateria("cure")
{
    //std::cout << "Cure default constructor called" << std::endl;
}

Cure::Cure(Cure const &obj) : AMateria(obj.type)
{
    //std::cout << "Cure copy constructor called" << std::endl;
}

Cure &Cure::operator=(Cure const &obj)
{
    if (this != &obj)
    {
       // std::cout << "Cure Assign operator called" << std::endl;
       *((AMateria *)this) = obj;
    }
    return (*this);
}

Cure::~Cure()
{
    //std::cout << "Cure destructor called" << std::endl;
}

AMateria *Cure::clone() const
{
    return (new Cure(*this));
}

void Cure::use(ICharacter &target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}