#include <iostream>
#include <fstream>

int check_arguments(int ac, char **av)
{
    std::string argument;
    if (ac != 4)
    {
        std::cout << "missing arguments or more arguments" << std::endl;
        return (1);
    }
    else
    {
        for (int i = 1; i <= 3; i++)
        {
            argument = av[i];
            if (argument.length() == 0)
            {
                std::cout << "empty arguments" << std::endl;
                return (1);
            }
        }
        return (0);
    }
}

int main(int ac, char **av)
{
    std::fstream    inputFile;
    std::fstream    outputFile;
    std::string     line;
    if (check_arguments(ac,av))
        return (1);
    inputFile.open(av[1], std::ios::in);
    if (!inputFile)
    {
    	std::cout << "File not exist!" <<  std::endl;
        return (1);
	}
    while (std::getline(inputFile, line))
    {
        line.find();
        line.append("\n");
        std::cout << line ;
        if (inputFile.eof())
            break;
    }
}