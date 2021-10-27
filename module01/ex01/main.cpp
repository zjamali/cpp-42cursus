#include "zombie.hpp"


int main(void)
{
    int n = 50;
    Zombie *hord = zombieHorde(n, "kkk");
    
    for (int i = 0; i < n ; i++)
    {
        hord[i].anonance();
        hord[i].~Zombie();
    }
    operator delete (hord);
}