// add your code as appropriate 
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>

int main()
{
  std::ifstream fin("Current_Reservoir_Levels.tsv");
  if (fin.fail()) {
    std::cerr << "File cannot be opened for reading." << std::endl;
    exit(1); // exit if failed to open the file
  }
  std::string junk;
  getline(fin, junk);

  std::string userInput = "12/29/2018";
  std::string date;
  double eastSt;
  double eastEl;
  double westSt;
  double westEl;
  while(fin >> date >> eastSt >> eastEl >> westSt >> westEl) { 
    // this loop reads the file line-by-line
    // extracting 5 values on each iteration 
    
    fin.ignore(INT_MAX, '\n'); //skips to the end of line, 
    //ignoring the remaining columns 

    // for example, to print the date and East basin storage:
    if(date == userInput){
      std::cout << date << " " << eastSt << std::endl;
    }
    //std::cout << date << " " << eastSt << std::endl;
  } 
  
  return 0;
}
