#include "zombie.hpp"


int main()
{
    int n = 50;
    Zombie *hord = zombieHorde(n, "Zombie");

    for (int i = 0; i < n ; i++)
    {
        hord[i].announce();
    }
    for (int i = 0; i < n ; i++)
    {
        hord[i].~Zombie();
    }
    operator delete (hord);
}