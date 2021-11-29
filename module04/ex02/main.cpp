#include "Cat.hpp"
#include "Dog.hpp"

int main()
{

    Animal *j = new Cat();
    Animal *i = new Dog();

    *i = *j;
    // delete j;
    std::cout << i->getType() <<std::endl;
    delete i;

}