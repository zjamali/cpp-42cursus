#include "zombie.hpp"


int main(void)
{
    Zombie *hord = zombieHorde(10, "kkk");
    for(int i = 0; i < 10; i++)
    {
        hord[i].anonance();
    }
    for(int i = 0; i < 10 ; i++)
    {
        delete hord;
        hord++;
    }
}