#include "zombie.hpp"


int main(void)
{
    int n = 50;
    Zombie *hord = zombieHorde(n, "Zombie");

    for (int i = 0; i < n ; i++)
    {
        hord[i].anonance();
    }
    operator delete (hord);
}