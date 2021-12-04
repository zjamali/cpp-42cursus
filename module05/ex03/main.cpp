#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main()
{
    int n = 3;
    Form *form[n];
    for (int i = 0; i < n; i++)
        form[i] = nullptr;
    try
    {
        Intern someRandomIntern;
        Bureaucrat br("Zohair", 10);

        form[0] = someRandomIntern.makeForm("shrubbery", "home");
        form[1] = someRandomIntern.makeForm("robotomy request", "xavier");
        form[2] = someRandomIntern.makeForm("presidential pardon", "form");

        // Form *fr = someRandomIntern.makeForm("hello", "home");
        // std::cout << *fr << std::endl;

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

        std::cout << std::endl
                  << "->execute Forms" << std::endl;
        std::cout << "******** " << br.getName() << " try to execute " << (*form[0]).getName() << "  ********" << std::endl;
        br.executeForm(*form[0]);

        std::cout << std::endl;
        std::cout << "******** " << br.getName() << " try to execute " << (*form[1]).getName() << "  ********" << std::endl;
        br.executeForm(*form[1]);

        std::cout << std::endl;
        std::cout << "******** " << br.getName() << " try to execute " << (*form[2]).getName() << "  ********" << std::endl;
        br.executeForm(*form[2]);

        for (int i = 0; i < n; i++)
            delete form[i];
    }
    catch (const std::exception &e)
    {
        std::cout << "main catch : ";
        std::cout << e.what() << std::endl;
        for (int i = 0; i < n; i++)
            delete form[i];
    }
    return 0;
}
