#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
    Brain *Brain;

public:
    Cat();
    Cat(std::string const type);
    Cat(Cat const &obj);
    Cat &operator=(Cat const &obj);
    ~Cat();

    void makeSound(void) const;
};

#endif