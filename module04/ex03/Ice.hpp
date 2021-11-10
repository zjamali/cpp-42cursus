#ifndef ICE_HPP
#define ICE_HPP
#include <string>
#include "AMateria.hpp"

class Ice : public AMateria
{
public:
    Ice();
    Ice(Ice const &obj);
    Ice &operator=(Ice const &obj);
    ~Ice();

    AMateria* clone() const;
    void use(ICharacter& target);
};


#endif