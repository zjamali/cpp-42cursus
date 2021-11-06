#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap()
{
    std::cout << " ScavTrap default constuctor called" << std::endl;
    this->_Name = "user";
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name) {
    std::cout << " ScavTrap parametre constuctor called" << std::endl;
    this->_Name = name;
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
}

ScavTrap::ScavTrap(ScavTrap const &obj)
{
    std::cout << " ScavTrap copy constructor called" << std::endl;
    *this = obj;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &obj)
{
    this->_Name = obj._Name;
    this->_energyPoints = obj._energyPoints;
    this->_attackDamage = obj._energyPoints;
    this->_hitPoints = obj._hitPoints;

    return (*this);
}

ScavTrap::~ScavTrap()
{
    std::cout << " ScavTrap destuctor called" << std::endl;
}

void ScavTrap::attack(std::string const & target)
{
    std::cout << "ScravTrap " << this->_Name <<  " attack " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap enterred in Gate keeper mode." << std::endl;
} 