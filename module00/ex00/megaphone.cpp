#include <iostream>

int main(int argc, char **argv)
{
    std::string str;

    if (argc > 1)
    {
        for (int i = 1; i < argc; i++)
        {
            str = argv[i];
            for (int i = 0; str[i]; i++)
            {
                std::cout << (char)toupper(str[i]) ;
            }
        }
        std::cout << std::endl;
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
}