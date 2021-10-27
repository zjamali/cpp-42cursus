#ifndef ZOMBIE_HPP
#define ZOMBIE__HPP
#include <iostream>
#include <iomanip>
#include <string>

class Zombie
{
private:
    std::string _name;

public:
    void anonance();
    Zombie(std::string name);
    ~Zombie();
};

Zombie* zombieHorde( int N, std::string name );
#endif