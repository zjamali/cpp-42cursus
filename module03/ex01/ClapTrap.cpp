#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << " ClapTrap default constuctor called" << std::endl;
    this->_Name = "user";
    this->_energyPoints = 10;
    this->_attackDamage = 0;
    this->_hitPoints = 10;
}

ClapTrap::ClapTrap(std::string name)
{
    std::cout << " ClapTrap parametre constuctor called" << std::endl;
    this->_Name = name;
    this->_energyPoints = 10;
    this->_attackDamage = 0;
    this->_hitPoints = 10;
}

ClapTrap::ClapTrap(ClapTrap const &obj)
{
    std::cout << " ClapTrap copy constructor called" << std::endl;
    *this = obj;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &obj)
{
    this->_Name = obj._Name;
    this->_energyPoints = obj._energyPoints;
    this->_attackDamage = obj._energyPoints;
    this->_hitPoints = obj._hitPoints;
    return (*this);
}

ClapTrap::~ClapTrap()
{
    std::cout << " ClapTrap destuctor called" << std::endl;
}

void ClapTrap::attack(std::string const & target)
{
    std::cout << "ClapTrap " << this->_Name <<  " attack " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount){
    std::cout << "ClapTrap " << this->_Name <<  " take amount " << amount << " of points of damage!" << std::endl;
}
void ClapTrap::beRepaired(unsigned int amount){
    std::cout << "ClapTrap " << this->_Name <<  " repaired " << amount << " of points!" << std::endl;
}