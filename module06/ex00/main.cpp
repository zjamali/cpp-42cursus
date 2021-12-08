#include "Convertion.hpp"
int main(int argc, char const *argv[])
{
    if (argc == 2)
    {
        Convertion num(argv[1]);
    }
    else 
        std::cout << "missing argument or more arguments entred" << std::endl;
    return 0;
}
