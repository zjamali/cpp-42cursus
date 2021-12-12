#include "span.hpp"

Span::Span(unsigned int N)
    : _N(N), _counter(0)
{
}

Span::Span(Span const &obj)
{
    *this = obj;
}

Span &Span::operator=(Span const &obj)
{
    if (this != &obj)
    {
        if (obj._N)
        {
            _N = obj._N;
            _counter = obj._counter;
            _set = obj._set;
        }
    }
    return (*this);
}

Span::~Span()
{
}

void Span::addNumber(int number)
{
    if (_counter < _N)
    {
        _set.insert(number);
        _counter++;
    }
    else
        throw std::runtime_error("span is full");
}

unsigned int Span::shortestSpan() const
{
    if (_N < 2)
        throw std::runtime_error("Can't find shortestSpan");
    
    std::multiset<int>::iterator it = _set.begin();
    unsigned int shortest = *(it++) - *(it);
    unsigned int sub = 0;
    while (it != (--_set.end()))
    {
        if (shortest > (sub = (*(it++) - *(it))))
        {
            shortest = sub;
        }
    }
    return (shortest);
}

unsigned int  Span::longestSpan() const
{
    if (_N <= 1)
        throw std::runtime_error("Can't find longestSpan");

    return (*(_set.begin())  -  *(--(_set.end())));
}