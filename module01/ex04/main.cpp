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
    std::ifstream    inputFile;
    std::ofstream    outputFile;
    std::string     line;
    int             found = 0;

    if (check_arguments(ac,av))
        return (1);
    inputFile.open(av[1]);
    if (!inputFile)
    {
    	std::cout << "File not exist!" <<  std::endl;
        return (1);
	}
    outputFile.open(std::string("") + av[1] +  ".replace");
    while (std::getline(inputFile, line))
    {
        found = 0;
        if(!inputFile.eof())
            line.append("\n");
        while (true)
        {
            found = line.find(av[2], found);
            if (found == -1)
                break;
            line.erase(found,std::string(av[2]).length());
            line.insert(found,av[3]);
            found = found + std::string(av[3]).size();
        }
        outputFile << line;
        if (inputFile.eof())
            break;
    }
    outputFile.close();
    inputFile.close();
    return (0);
}