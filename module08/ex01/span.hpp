#ifndef SPAN_HPP
#define SPAN_HPP
#include <iostream>
#include <exception>
#include <set>

class Span
{
private:
    unsigned int _N;
    unsigned int _counter;
    std::multiset<int , std::greater<int> > _set;
    Span();

public:
    Span(unsigned int N);
    Span(Span const &obj);
    Span &operator=(Span const &obj);

    void addNumber(int number);
    unsigned int shortestSpan() const;
    unsigned int longestSpan() const;
    ~Span();
};

#endif