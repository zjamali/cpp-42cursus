#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "default constuctor called" << std::endl;
    this->_Name = "user";
    this->_energyPoints = 10;
    this->_attackDamage = 0;
    this->_hitPoints = 10;
}

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "parametre constuctor called" << std::endl;
    this->_Name = name;
    this->_energyPoints = 10;
    this->_attackDamage = 0;
    this->_hitPoints = 10;
}

ClapTrap::~ClapTrap()
{
    std::cout << "destuctor called" << std::endl;
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