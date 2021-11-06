#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
    std::cout << " DiamondTrap default constuctor called" << std::endl;
    this->_Name = "user";
    FragTrap::_Name = DiamondTrap::_Name + "_clap_name";
    this->_hitPoints = FragTrap::_hitPoints;
    this->_energyPoints = ScavTrap::_energyPoints;
    this->_attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::DiamondTrap(std::string name)
{
    std::cout << " DiamondTrap constuctor called" << std::endl;
    this->_Name = name;
    FragTrap::_Name = DiamondTrap::_Name + "_clap_name";
    this->_hitPoints = FragTrap::_hitPoints;
    this->_energyPoints = ScavTrap::_energyPoints;
    this->_attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::DiamondTrap( DiamondTrap const &obj)
{
    std::cout << "DiamondTrap copy constructer called" << std::endl;
    *this = obj;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &obj)
{
    this->_Name = obj._Name;
    this->_attackDamage = obj._attackDamage;
    this->_hitPoints = obj._hitPoints;
    this->_energyPoints = obj._energyPoints;

    return (*this);
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "Diamond Destructer called " << std::endl;
}

void DiamondTrap::whoAmI(void){
    std::cout << "my name is " << this->_Name << "and name of ClapTrap is " << ClapTrap::_Name << std::endl; 
}