#include <algorithm>
#include <iostream>

template <typename T>
bool easyfind(T x,int y)
{
    if (std::find(x.begin(), x.end(), y) != x.end())
    {
        std::cout << "the first occurrence founded" << std::endl;
        return (true);
    }
    else
    {
        std::cout << "the first occurrence not found" << std::endl;
        return (false);
    }
}