#include "FragTrap.hpp"

int main()
{
    FragTrap player("Jamali");
    FragTrap player1;
//
    player.attack("Zouhair");
    player1.takeDamage(1);
    player1.beRepaired(5);
    player1.highFivesGuys();
}