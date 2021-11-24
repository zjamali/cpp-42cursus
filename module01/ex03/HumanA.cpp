#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon):_weapon(weapon)
{
    this->_name = name;
    /*
    *   std::cout << "HumanA constructor called" << std::endl;
    */
}

HumanA::~HumanA()
{
    /*
    *   std::cout << "HumanA destructor called" << std::endl;
    */
}

void HumanA::attack(void)
{
    std::cout << this->_name << " attacks with his " << this->_weapon.getType() << std::endl;
}