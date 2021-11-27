#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "* FragTrap default constuctor called" << std::endl;
    this->_Name = "user";
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
}

FragTrap::FragTrap(std::string name)
{
    std::cout << "* FragTrap constuctor called" << std::endl;
    this->_Name = name;
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
}

FragTrap::FragTrap(FragTrap const &obj)
{
    std::cout << "* FragTrap copy constructor called" << std::endl;
    if (this == &obj)
        return;
    *this = obj;
}

FragTrap &FragTrap::operator=(FragTrap const &obj)
{
    std::cout << "* FragTrap assign operator called" << std::endl;
    this->_Name = obj._Name;
    this->_energyPoints = obj._energyPoints;
    this->_attackDamage = obj._energyPoints;
    this->_hitPoints = obj._hitPoints;

    return (*this);
}

FragTrap::~FragTrap()
{
    std::cout << "* FragTrap destuctor called" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "the Hight Five request" << std::endl;
}
