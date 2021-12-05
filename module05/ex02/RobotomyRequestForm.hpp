#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP
#include "Form.hpp"

#define RB_SIGN 72 
#define RB_EXEC 45

class RobotomyRequestForm :public Form
{
private:
    std::string const _target;
    RobotomyRequestForm();
    RobotomyRequestForm &operator=(RobotomyRequestForm const &obj);

public:
    RobotomyRequestForm(std::string const &target);
    RobotomyRequestForm(RobotomyRequestForm const &obj);
    ~RobotomyRequestForm();

    void action() const;
};

#endif