#ifndef SPAN_HPP
#define SPAN_HPP
#include <iostream>
#include <exception>
#include <vector>
#include <algorithm>
class Span
{
private:
    unsigned int _N;
    unsigned int _counter;
    std::vector<int> _vect;
    Span();
    
public:
    Span(unsigned int N);
    Span(Span const &obj);
    Span &operator=(Span const &obj);

    void addNumber(int number);
    int  shortestSpan() const;
    int  longestSpan() const;
    ~Span();
};

#endif