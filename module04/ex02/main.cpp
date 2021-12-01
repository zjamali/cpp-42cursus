#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    //Animal *j = new Animal();
    Animal *i = new Dog();

    std::cout << i->getType() <<std::endl;
    delete i;

}