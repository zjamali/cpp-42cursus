#include "zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie *zombieHord = (Zombie *)operator new (N* sizeof(Zombie));
    
    for(int i = 0; i < N ; i++)
    {
        new(&zombieHord[i]) Zombie(name + " " + std::to_string(i));
    }
    return zombieHord;
}