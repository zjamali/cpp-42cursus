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

void replace(std::string &line, std::string to_replace,std::string replace_with, int &found_pos)
{
    line.erase(found_pos, to_replace.length());
    line.insert(found_pos, replace_with);
    found_pos = found_pos + replace_with.length();
}

int main(int ac, char **av)
{
    std::ifstream inputFile;
    std::ofstream outputFile;
    std::string line;
    int found_pos = 0;

    if (check_arguments(ac, av))
        return (1);
    inputFile.open(av[1]);
    if (inputFile.fail())
    {
        std::cout << "File could not open!" << std::endl;
        return (1);
    }
    outputFile.open(std::string("") + av[1] + ".replace");
    while (std::getline(inputFile, line))
    {
        found_pos = 0;
        if (!inputFile.eof())
            line.append("\n");
        while (true)
        {
            found_pos = line.find(av[2], found_pos);
            if (found_pos == -1)
                break;
            replace(line, av[2], av[3], found_pos);
        }
        outputFile << line;
        if (inputFile.eof())
            break;
    }
    outputFile.close();
    inputFile.close();
    return (0);
}