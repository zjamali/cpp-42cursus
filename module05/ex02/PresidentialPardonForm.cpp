#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
    : Form("PresidentialPardonForm", PR_SIGN, PR_EXEC), _target("no target")
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string const &target)
    : Form("PresidentialPardonForm", PR_SIGN, PR_EXEC), _target(target)
{
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &obj)
    :Form("PresidentialPardonForm", PR_SIGN, PR_EXEC), _target(obj._target)
{
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

void PresidentialPardonForm::action() const
{
    std::cout << this->_target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}