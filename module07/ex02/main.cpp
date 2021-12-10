#include "Array.hpp"

int main()
{
    Array<int> arr(50);
    Array<int> h(50);
    Array<int> j;

    for (size_t i = 0; i < 50; i++)
    {
        arr[i] = i;
    }
    h = arr;
    for (size_t i = 0; i < 50; i++)
    {
        std::cout << h[i] << "," ;
    }
    /*
    try
    {
        std::cout << h[550] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << '\n';
    }
    */
    return 0;
}
