#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat br1("ZZZZZ", 1);
        std::cout << br1 << std::endl;
        try
        {
            br1.incrementGrade();
        }
        catch(const std::exception& e)
        {
            std::cout << e.what() << std::endl;
        }
        std::cout << br1 << std::endl;
        br1.decrementGade();
        std::cout << br1 << std::endl;

        Bureaucrat br3("JJJJJ", 150);
        std::cout << br3 << std::endl;
        try
        {
            br3.decrementGade();
        }
        catch(const std::exception& e)
        {
            std::cout << e.what() << std::endl;
        }
        std::cout << br3 << std::endl;
        br3.incrementGrade();
        std::cout << br3 << std::endl;

        Bureaucrat br0("MMMMM", 0);
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }

    return 0;
}
