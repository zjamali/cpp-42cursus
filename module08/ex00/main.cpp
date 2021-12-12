#include "easyfind.hpp"
#include <vector>
int main()
{
    std::vector<int> vect;

    srand(time(NULL));
    for (int i = 0; i < 10; i++)
    {
        const int value = rand() % 10;
        vect.push_back(value);
    }
    for (int index = 0; index <10; ++index)
        std::cout << vect[index] << ',';
    std::cout << std::endl;

    easyfind(vect,18);
    return 0;
}
