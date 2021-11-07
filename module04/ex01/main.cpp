#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    /* ------*/
    Animal *array[50];

    for (int i = 0; i < 50; i++)
    {
        if (i < 25)
            array[i] = new Dog();
        else
            array[i] = new Cat();
    }

    for (int i = 0; i < 50; i++)
    {
        std::cout << array[i]->getType() << std::endl;
    }
    for (int i = 0; i < 50; i++)
    {
        delete array[i];
    }

    
    std::cout << "\n\n***** Copy *****"<< std::endl ;
    Dog *a = new Dog();
    Dog b(*a);
    std::cout << "\n\n\n\n" ;
    a->setBrainIdeas("hello");
    a->setBrainIdeas("jsafhk");
    a->setBrainIdeas("safkljksajf");
    a->setBrainIdeas("kslafjklasfj");
    a->setBrainIdeas("askfljklasfjhsdjhdjsfsf");
    std::cout << "before copy:" << std::endl;
    b.printBrainIdeas();    
    std::cout << "\n\n" ;
    std::cout << "after copy:" << std::endl;
    b = *a;
    b.printBrainIdeas();
    a->printBrainIdeas();
    std::cout << "\n\n" ;

    delete a;
}