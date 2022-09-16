#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>
#include <iomanip>
void reverse_order(std::string date1, std::string date2){
    int month1 = std::stoi(date1.substr(0, 2));
    int days1 = std::stoi(date1.substr(3, 6));
    int month2 = std::stoi(date2.substr(0, 2));
    int days2 = std::stoi(date2.substr(3, 6));
    std::ifstream fin("Current_Reservoir_Levels.tsv");
    if (fin.fail()) {
        std::cerr << "File cannot be opened for reading." << std::endl;
        exit(1);
    }
    std::string junk;
    getline(fin, junk);
    std::string date;
    double eastSt;
    double eastEl;
    double westSt;
    double westEl;
    int num = 0;
    while(fin >> date >> eastSt >> eastEl >> westSt >> westEl) { 

    fin.ignore(INT_MAX, '\n');
    if(std::stoi(date.substr(0, 2)) == month2 && std::stoi(date.substr(3, 6)) == days2){
        num++;
        break;
    }else if(std::stoi(date.substr(0, 2)) >= month1 && std::stoi(date.substr(3, 6)) >= days1 || std::stoi(date.substr(0, 2)) > month1){
        num++;
    }
    };
    fin.seekg(0, std::ios::beg);
    getline(fin, junk);
    std::string allDates[num];
    double allWestEl[num];
    int count = 0;
    while(fin >> date >> eastSt >> eastEl >> westSt >> westEl) { 
        fin.ignore(INT_MAX, '\n');
        if(std::stoi(date.substr(0, 2)) == month2 && std::stoi(date.substr(3, 6)) == days2){
            allDates[count] = date;
            allWestEl[count] = westEl;
            break;
        }else if(std::stoi(date.substr(0, 2)) >= month1 && std::stoi(date.substr(3, 6)) >= days1 || std::stoi(date.substr(0, 2)) > month1){
            allDates[count] = date;
            allWestEl[count] = westEl;
            count++;
            if(count >= 5){
                count--;
            }
        }
    }
    for(int i = num - 1; i > 0; i--){
        std::cout << allDates[i] << " " << allWestEl[i] << " ft" << std::endl;
    }
}