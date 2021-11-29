#include "Cat.hpp"
#include "Dog.hpp"

int main()
{

    int n = 4;
    Animal *array[n];

    for (int i = 0; i < n; i++)
    {
        if (i < n / 2)
            array[i] = new Dog();
        else
            array[i] = new Cat();
    }

    for (int i = 0; i < n; i++)
    {
        std::cout << array[i]->getType() << std::endl;
    }

    for (int i = 0; i < n; i++)
    {
        delete array[i];
    }

    std::cout << "\n\n***** Copy *****" << std::endl;
   
    Dog secondDog;
    {
        Dog firstDog;
        secondDog = firstDog;
    }

}