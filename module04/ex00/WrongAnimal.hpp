#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
#include <iostream>

class WrongAnimal
{
protected:
    std::string type;

public:
    WrongAnimal();
    WrongAnimal(std::string const type);
    WrongAnimal(WrongAnimal const &obj);
    WrongAnimal &operator=(WrongAnimal const &obj);
    ~WrongAnimal();

    std::string const &getType() const;
    void makeSound(void) const;
};

#endif