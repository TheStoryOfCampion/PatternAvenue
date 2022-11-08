#ifndef CENSUS_H
#define CENSUS_H
#include <iostream>
#include <string>
#include <vector>
#include <iostream>


using namespace std;


class Census  {
  public:
    Census(int population, string country, int threat);
    //int  getPopulation(int i);
    void countryName(string count);
    string threatReport(int i) ;
    void go();
  
  private:  
    int population;
    string country;
    int threat;   

};

#endif


