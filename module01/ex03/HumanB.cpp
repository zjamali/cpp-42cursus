#include "HumanB.hpp"

HumanB::HumanB(std::string name):_weapon(nullptr)
{
    this->_name =name;
    /*
    *   std::cout << "HumanB constructor called" << std::endl;
    */
}

HumanB::~HumanB()
{
    /*
    *   std::cout << "HumanB constructor called" << std::endl;
    */
}

void HumanB::attack(void)
{
    if (_weapon != nullptr)
        std::cout << this->_name << " attacks with his " << _weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
    this->_weapon = &weapon;
}