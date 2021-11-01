#include "Karen.hpp"
 
int main()  
{
  Karen w;
  std::string karenLevels[4] = { "DEBUG", "INFO", "WARNING", "ERROR"};

  for(int i = 0; i < 4 ; i++)
  {
    w.complain(karenLevels[i]);
  }
  std::cout << std::endl;
  for(int i = 3; i >= 0 ; i--)
  {
    w.complain(karenLevels[i]);
  }
  return 0;  
}