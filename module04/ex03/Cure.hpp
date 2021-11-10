#ifndef CURE_HPP
#define CURE_HPP
#include "AMateria.hpp"

class Cure : public AMateria
{
private:
   std::string type;
public:
    Cure();
    Cure(std::string const type);
    Cure(Cure const &obj);
    Cure &operator=(Cure const &obj);
    ~Cure();

    AMateria* clone() const;
    void use(ICharacter& target);
};


#endif