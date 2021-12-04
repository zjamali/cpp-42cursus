#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat br1("ZZZZZ", 1);
        std::cout << br1 << std::endl;
        //br1.incrementGrade();
        //Bureaucrat br2("KKKK", 0);

        Bureaucrat br3("JJJJJ", 150);
        std::cout << br3 << std::endl;
        //br3.decrementGade();
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    
    return 0;
}
