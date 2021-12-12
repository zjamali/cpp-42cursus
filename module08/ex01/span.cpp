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
            _vect = obj._vect;
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
        _vect.push_back(number);
        _counter++;
    }
    else
        throw std::runtime_error("span is full");
}

int Span::shortestSpan() const
{
    if (_N <= 1)
    {
        throw std::runtime_error("Can't find shortestSpan");
    }
    std::vector<int> copy = _vect;
    std::sort(copy.begin(), copy.end());
    int shortest = (copy.at(1) - copy.at(0));
    for (int i = 1; i < static_cast<int>(copy.size() - 1); i++)
    {
        if (shortest > (copy.at(i + 1) - copy.at(i)))
        {
            shortest = (copy.at(i + 1) - (copy.at(i)));
        }
    }
    return (shortest);
}

int Span::longestSpan() const
{
    if (_N <= 1)
    {
        throw std::runtime_error("Can't find longestSpan");
    }
    std::vector<int> copy(_vect);
    std::sort(copy.begin(), copy.end());
    return (copy.at(_N - 1) - copy.at(0));
}