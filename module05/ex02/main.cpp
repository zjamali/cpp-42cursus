#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
    try
    {
        Form *form[3];
        Bureaucrat br("Zohair", 10);

        form[0] = new PresidentialPardonForm("xavier");
        form[1] = new RobotomyRequestForm("form");
        form[2] = new ShrubberyCreationForm("home");

        std::cout << std::endl;
        std::cout << "bureaucrat : " << br << std::endl;
        std::cout << "form[0] : " << *form[0] << std::endl;
        std::cout << "form[1] : " << *form[1] << std::endl;
        std::cout << "form[2] : " << *form[1] << std::endl;
        std::cout << std::endl;

        std::cout << "->execute Forms" << std::endl;
        std::cout << "******** " << br.getName() << " try to sign " << (*form[0]).getName() << "  ********" << std::endl;
        br.signForm(*form[0]);

        std::cout << std::endl;
        std::cout << "******** " << br.getName() << " try to sign " << (*form[1]).getName() << "  ********" << std::endl;
        br.signForm(*form[1]);

        std::cout << std::endl;
        std::cout << "******** " << br.getName() << " try to sign " << (*form[2]).getName() << "  ********" << std::endl;
        br.signForm(*form[2]);


        std::cout <<std::endl << "->execute Forms" << std::endl;
                std::cout << "******** " << br.getName() << " try to execute " << (*form[0]).getName() << "  ********" << std::endl;
        br.executeForm(*form[0]);

        std::cout << std::endl;
        std::cout << "******** " << br.getName() << " try to execute " << (*form[1]).getName() << "  ********" << std::endl;
        br.executeForm(*form[1]);

        std::cout << std::endl;
        std::cout << "******** " << br.getName() << " try to execute " << (*form[2]).getName() << "  ********" << std::endl;
        br.executeForm(*form[2]);
    }
    catch (const std::exception &e)
    {
        std::cout << "main catch : ";
        std::cout << e.what() << std::endl;
    }
    return 0;
}
