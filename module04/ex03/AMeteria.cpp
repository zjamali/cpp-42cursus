#include "AMateria.hpp"

AMateria::AMateria()
{
    //std::cout << "AMateria default constructor called" << std::endl;
    this->type = "";
}

AMateria::AMateria(std::string const &type)
{
    //std::cout << "AMateria parametre constructor called" << std::endl;
    this->type = type;
}

AMateria::AMateria(AMateria const &obj)
{
    //std::cout << "AMateria copy constructor called" << std::endl;
    *this = obj;
}

AMateria &AMateria::operator=(AMateria const &obj)
{
    if (this != &obj)
    {
        //std::cout << "AMateria Assign operator called" << std::endl;
        this->type = obj.type;
    }
    return (*this);
}

AMateria::~AMateria()
{
    //std::cout << "AMateria destuctor called" << std::endl;
}

std::string const &AMateria::getType() const
{
    return (this->type);
}

void AMateria::use(ICharacter &target)
{
    (void)target;
}