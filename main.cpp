// add your code as appropriate 
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>
#include "reservoir.h"
#include "reverseorder.h"

int main()
{
  std::cout << "Task A: " << std::endl;
  std::string date = "05/20/2018";
  //Test 1A
  std::cout << "Enter Date: " << date << std::endl;
  std::cout << "East Basin Storage: " << get_east_storage(date) << " billion gallons" << std::endl;
  date = "06/29/2018";

  //Test2A
  std::cout << "Enter Date: " << date << std::endl;
  std::cout << "East Basin Storage: " << get_east_storage(date) << " billion gallons" << std::endl;
  date = "03/09/2018";

  //Test3A
  std::cout << "Enter Date: " << date << std::endl;
  std::cout << "East Basin Storage: " << get_east_storage(date) << " billion gallons" << std::endl;

  std::cout << "\nTask B: " << std::endl;
  std::cout << "minumum storage in East basin: " << get_min_east() << " billion gallons" << std::endl;
  std::cout << "MAXiumum storage in East basin: " << get_max_east() << " billion gallons" << std::endl;

  std::cout << "\nTask C: " << std::endl;
  //Test1C
  date = "05/20/2018";
  std::cout << compare_basins(date) << std::endl;

  //Test2C
  date = "06/29/2018";
  std::cout << compare_basins(date) << std::endl;

  //Test3C
  date = "03/09/2018";
  std::cout << compare_basins(date) << std::endl;

  std::cout << "\nTask D: " << std::endl;
  reverse_order("05/29/2018", "06/02/2018");
  return 0;
} 