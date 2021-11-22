#include "zombie.hpp"

void Zombie::announce()
{
    std::cout << _name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(std::string name)
{
    this->_name = name;
    std::cout << _name << " created" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << _name << " deleted" << std::endl;
}