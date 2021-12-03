#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP
#include "Form.hpp"
#include <fstream>

#define SH_SIGN 145 
#define SH_EXEC 137

class ShrubberyCreationForm : public Form
{
private:
    std::string const _target;
    ShrubberyCreationForm();
    ShrubberyCreationForm &operator=(ShrubberyCreationForm const &obj);

public:
    ShrubberyCreationForm(std::string const &target);
    ShrubberyCreationForm(ShrubberyCreationForm const &obj);
    ~ShrubberyCreationForm();

    void action() const;
};


#endif