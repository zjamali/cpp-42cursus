#include "ClapTrap.hpp"

int main()
{
    ClapTrap palyer("Jamali");
    ClapTrap palyer1;

    palyer.attack("Zouhair");
    palyer1.takeDamage(1);
    palyer.beRepaired(5);
}