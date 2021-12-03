#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    try
    {
        Bureaucrat br("Zohair", 20);
        //Form form160("garde 160 form",160,160);
        Form form0("first", 25 , 25);
        Form form1("seconde", 1, 1);
        
        std::cout << std::endl;
        std::cout << "bureaucrat : " << br << std::endl;
        std::cout << "form0 : " << form0 << std::endl;
        std::cout << "form1 : " << form1 << std::endl;
        std::cout << std::endl;

        std::cout << "******** "<< br.getName() << " try to sign " << form0.getName() << "  ********"<< std::endl; 
            br.signForm(form0);
        
        std::cout << std::endl;
        std::cout << "******** "<< br.getName() << " try to sign " << form1.getName() << "  ********"<< std::endl; 
        br.signForm(form1);
    }
    catch(const std::exception& e)
    {
        std::cout << "main catch : " ;
        std::cout << e.what() << std::endl;
    }
    
    return 0;
}
