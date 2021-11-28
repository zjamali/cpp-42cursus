#include "ClapTrap.hpp"

int main()
{
    ClapTrap player("Jamali");

    std::cout << std::endl;
    player.attack("Zouhair");
    player.takeDamage(1);
    player.beRepaired(5);
    std::cout << std::endl;
}