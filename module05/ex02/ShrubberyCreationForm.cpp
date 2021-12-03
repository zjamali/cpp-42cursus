#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
    : Form("ShrubberyCreationForm", SH_SIGN, SH_EXEC), _target("no target")
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target)
    : Form("ShrubberyCreationForm", SH_SIGN, SH_EXEC), _target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &obj)
    : Form("ShrubberyCreationForm", SH_SIGN, SH_EXEC), _target(obj._target)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

void ShrubberyCreationForm::action() const
{
    std::ofstream file;

    file.open(_target + "_shrubbery");

    if (file.good())
    {
        file << "              '.,         " << std::endl;
        file << "        'b      *         " << std::endl;
        file << "         '$    #.         " << std::endl;
        file << "          $:   #:         " << std::endl;
        file << "          *#  @):         " << std::endl;
        file << "          :@,@):   ,.**:' " << std::endl;
        file << ",         :@@*: ..**'     " << std::endl;
        file << " '#o.    .:(@'.@*\"'       " << std::endl;
        file << "    'bq,..:,@@*'   ,*     " << std::endl;
        file << "    ,p$q8,:@)'  .p*'      " << std::endl;
        file << "   '    '@@Pp@@*'         " << std::endl;
        file << "         Y7'.'            " << std::endl;
        file << "        :@):.             " << std::endl;
        file << "       .:@:'.             " << std::endl;
        file << "     .::(@:.              " << std::endl;
        file.close();
        std::cout << _target + "_shrubbery file created" << std::endl;
    }
}