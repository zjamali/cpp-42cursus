#include "FragTrap.hpp"

int main()
{
    FragTrap player("Jamali");
    FragTrap player1;

    std::cout << std::endl;
    player.attack("Zouhair");
    player1.takeDamage(1);
    player1.beRepaired(5);
    player1.highFivesGuys();
    std::cout << std::endl;
}