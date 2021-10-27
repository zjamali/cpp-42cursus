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