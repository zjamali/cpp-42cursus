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

Zombie *newZombie(std::string name);
void randomChump(std::string name);