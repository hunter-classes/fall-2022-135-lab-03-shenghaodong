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
  std::cout << "East Basin Storage: " << get_east_storage(date) << " billion gallons" << std::endl;
  std::cout << get_min_east() << std::endl;
  std::cout << get_max_east() << std::endl;
  return 0;
}
