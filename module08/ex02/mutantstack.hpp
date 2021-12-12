#ifndef  MUTANTSTACK_HPP
#define  MUTANTSTACK_HPP

#include <stack>

template <typename T> 
class MutantStack : public std::stack<T>
{
private:
    /* data */
public:
    MutantStack();
    ~MutantStack();
    void printf();
};

#endif