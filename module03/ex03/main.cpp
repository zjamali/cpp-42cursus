
#include "DiamondTrap.hpp"

int main()
{

    DiamondTrap player("Zouhair");

    std::cout << std::endl;
    player.attack("hello");
    player.whoAmI();
    player.attack("victim");
    player.takeDamage(80);
    player.beRepaired(20);
    std::cout << std::endl;
}