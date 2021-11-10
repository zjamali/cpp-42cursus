#include "Cure.hpp"

Cure::Cure()
{
    std::cout << "Cure default constructor called" << std::endl;
    this->type = "Cure";
}
Cure::Cure(Cure const &obj)
{
    std::cout << "Cure copy constructor called" << std::endl;
    *this = obj;
}

Cure &Cure::operator=(Cure const &obj)
{
    std::cout << "Cure Assign operator called" << std::endl;
    this->type = obj.type;
    return (*this);
}

Cure::~Cure()
{
    std::cout << "Cure destructor called" << std::endl;
}

AMateria *Cure::clone() const 
{
    Cure *obj = new Cure();
    return obj;
}

void Cure::use(ICharacter &target)
{
    std::cout << "* heals " << target.getName() <<"’s wounds *" << std::endl;
}