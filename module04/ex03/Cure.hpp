#ifndef CURE_HPP
#define CURE_HPP
#include <string>
#include "AMateria.hpp"

class Cure : public AMateria
{
public:
    Cure();
    Cure(std::string const &type);
    Cure(Cure const &obj);
    Cure &operator=(Cure const &obj);
    ~Cure();

    AMateria* clone() const;
    void use(ICharacter& target);
};


#endif