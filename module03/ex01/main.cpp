#include "ScavTrap.hpp"

int main()
{
    ScavTrap player("Jamali");
    ScavTrap player1;

    std::cout << std::endl;
    player.attack("Zouhair");
    player1.takeDamage(1);
    player.beRepaired(5);
    player.guardGate();
    std::cout << std::endl;
}