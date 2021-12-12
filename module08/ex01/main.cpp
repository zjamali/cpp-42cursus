#include "span.hpp"
#include <iostream>

int main()
{
    Span sp = Span(5);
    sp.addNumber(5);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;

    {
        Span sp = Span(5000);
        srand(time(NULL));
        for (int i = 0; i < 5000; i++)
        {
            const int value = rand();
            sp.addNumber(value);
        }
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
}