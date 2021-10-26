#include "zombie.hpp"


int main(void)
{
    Zombie *z= newZombie("hello");
    z->anonance();
    delete z;
    randomChump("ZOUHAIR");
}