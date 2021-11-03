#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include "ClapTrap.hpp"
// #include <iostream>

class ScavTrap : public ClapTrap
{

public:
    ScavTrap();
    ScavTrap(std::string name);
    ScavTrap(ScavTrap const &obj);
    ScavTrap &operator=(ScavTrap const &obj);
    ~ScavTrap();

   void    attack(std::string const & target);
    void    guardGate();
};

#endif