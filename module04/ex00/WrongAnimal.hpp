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
    virtual ~WrongAnimal();

    std::string getType() const;
    virtual void makeSound(void) const;
};

#endif