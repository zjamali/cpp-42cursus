#include "Intern.hpp"

Intern::Intern()
{
}

Intern::~Intern()
{

}

Intern::RequestedformNotknown::RequestedformNotknown() 
{
}
Intern::RequestedformNotknown::~RequestedformNotknown() throw()
{
}

const char *Intern::RequestedformNotknown::what() const throw() 
{
    return ("the form requested not known");
}


Form *Intern::makeForm(std::string const &formName, std::string const &target)
{
    std::string array[3] = {"shrubbery","robotomy request", "presidential pardon"};
    Form *(*func[3])(std::string const &target);

    func[0] = &createShrubberyForm;
    func[1] = &createRobotomyRequestForm;
    func[2] = &createPresidentialPardonForm;

    for (int i = 0; i < 3; i++)
    {
        if (array[i] == formName)
        {
            std::cout << "Intern creates " + array[i] << std::endl;
            return(func[i](target));
        }
    }
    throw RequestedformNotknown();
}

Form *createShrubberyForm(std::string const &target)
{
    return (new ShrubberyCreationForm(target));
}

Form *createRobotomyRequestForm(std::string const &target)
{
    return (new RobotomyRequestForm(target));
}

Form *createPresidentialPardonForm(std::string const &target)
{
    return (new PresidentialPardonForm(target));
}