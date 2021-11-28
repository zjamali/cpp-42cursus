#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap
{
public:
    FragTrap();
    FragTrap(std::string name);
    FragTrap(FragTrap const &obj);
    FragTrap &operator=(FragTrap const &obj);
    ~FragTrap();

    void    attack(std::string const & target);
    void    highFivesGuys(void);
};

#endif