#include "span.hpp"
#include <iostream>
#include <vector>

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

    int n = 20000;
    Span sp1 = Span(n);
    for (int i = 0; i < n; i++)
    {
        int num = rand() % n;
        //std::cout << num << " , " ;
        sp1.addNumber(num);
    }
    std::cout << sp1.shortestSpan() << std::endl;
    std::cout << sp1.longestSpan() << std::endl;


    n = 20;
    std::vector<int> vet;
    Span sp2 = Span(n);
    for (int i = 0; i < n; i++)
    {
        int num = rand() % n;
        //std::cout << num << " , " ;
        vet.push_back(num);
    }
    std::cout << std::endl;
    sp2.addNumber(vet.begin(),vet.end());
    std::cout << sp2.shortestSpan() << std::endl;
    std::cout << sp2.longestSpan() << std::endl;
}