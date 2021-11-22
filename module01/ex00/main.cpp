#include "zombie.hpp"


int main(void)
{
    Zombie *z= newZombie("zouhair");
    z->announce();
    delete z;
    randomChump("ZOUHAIR");
}