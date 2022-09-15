// add your code as appropriate 
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>
#include "reservoir.h"

int main()
{
  std::string date = "05/20/2018";
  std::cout << "Enter Date: " << date << std::endl;
  std::cout << "East Basin Storage: " << compare_basins(date) << " billion gallons" << std::endl;
  return 0;
}
