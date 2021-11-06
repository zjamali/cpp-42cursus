#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"

class Cat : public Animal
{
public:
    Cat();
    Cat(std::string const type);
    Cat(Cat const &obj);
    Cat &operator=(Cat const &obj);
    ~Cat();

    void makeSound(void) const;
};

#endif