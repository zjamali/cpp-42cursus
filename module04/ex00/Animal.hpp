#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>

class Animal
{
protected:
    std::string type;
public:
    Animal();
    Animal(std::string const type);
    Animal(Animal const &obj);
    Animal &operator=(Animal const &obj);
    virtual ~Animal();

    std::string getType() const;
    virtual void makeSound(void) const;
};

#endif