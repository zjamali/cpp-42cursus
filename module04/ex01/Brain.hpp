#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <iostream>

class Brain
{
private:
        int counter;

protected:
    std::string ideas[100];
public:
    Brain();
    Brain(Brain const &obj);
    Brain &operator=(Brain const &obj);
    ~Brain();

    void setBrainIdeas(std::string idea);
    void printBrainIdeas() const;
};

#endif