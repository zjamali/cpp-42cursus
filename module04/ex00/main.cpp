#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal *meta = new Animal();
    const Animal *j = new Dog();
    const Animal *i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound();
    j->makeSound();
    meta->makeSound();

    std::cout << "Wrong animal sound" << std::endl;
    const Animal *wrongAnimal = new Animal();
    const WrongCat *wrongCat = new WrongCat();

    std::cout << wrongAnimal->getType() << " " << std::endl;
    std::cout << wrongCat->getType() << " " << std::endl;
    wrongAnimal->makeSound();
    wrongCat->makeSound();

    delete meta;
    delete j;
    delete i;
    delete wrongCat;
    delete wrongAnimal;
    return 0;
}
