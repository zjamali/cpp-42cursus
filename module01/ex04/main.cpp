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
    int             found = 0;
    std::string     strToFind = av[2];
    std::string     splittedLine;

    std::cout << strToFind << std::endl;
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
        found = 0;
        line.append("\n");
        std::cout << line ;
        while (true)
        {
            found = line.find(strToFind, found);
            if (found == -1)
                break;
            std::cout << "found : " <<found << std::endl;
            found = found + 1;
        }
        if (inputFile.eof())
            break;
    }
}