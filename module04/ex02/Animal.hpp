#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>

class Animal
{
protected:
    std::string type;

    Animal();
    Animal(std::string const type);
    Animal(Animal const &obj);
public:
    Animal &operator=(Animal const &obj);
    virtual ~Animal();

    std::string const &getType() const;
    virtual void makeSound(void) const = 0;

};

#endif