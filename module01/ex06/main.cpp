#include "Karen.hpp"

enum string_index
{
  DEBUG,
  INFO,
  WARNING,
  ERROR,
};

int log_index(std::string level)
{
  if (level == "DEBUG")
    return DEBUG;
  else if (level == "INFO")
    return INFO;
  else if (level == "WARNING")
    return WARNING;
  else if (level == "ERROR")
    return ERROR;
  else
    return 5;
}

int main(int ac, char **av)
{
  Karen w;

  if (ac != 2)
  {
    std::cout << "missing log! or multiple logs" << std::endl; 
    return (1);
  }
    switch (log_index(av[1]))
    {
    case DEBUG:
      std::cout << "[ DEBUG ]" << std::endl;
      w.complain("DEBUG");
      std::cout << std::endl;
    case INFO:
      std::cout << "[ INFO ]" << std::endl;
      w.complain("INFO");
      std::cout << std::endl;
    case WARNING:
      std::cout << "[ WARNING ]" << std::endl;
      w.complain("WARNING");
      std::cout << std::endl;
    case ERROR:
      std::cout << "[ ERROR ]" << std::endl;
      w.complain("ERROR");
      break;
    default:
      std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
      break;
    }
    return (0);
}