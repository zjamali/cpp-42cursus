#include "ClapTrap.hpp"

int main()
{
    ClapTrap player("Jamali");
    ClapTrap player1;

    player.attack("Zouhair");
    player1.takeDamage(1);
    player.beRepaired(5);
}