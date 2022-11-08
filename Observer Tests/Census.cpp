#include "Census.h"
#include <iostream>
#include <string>
#include <vector>
#include <iostream>


using namespace std;


Census::Census(int population, string country, int threat){
    population = population;
    country = country;
    threat = threat;
}

/*int Census::getPopulation(int i){ 
 population = i ;

 return population;
}*/

void Census::countryName(string count){
  country = count;
}

string Census::threatReport(int i){

threat = i;

  if(threat > 0 && threat <= 1){
    return "Threat is looming";
  }else if(threat > 1 ){
    return "Danger!!...Take Cover!!";
  }else{
    return "There is no threat.";
  }

}

void Census::go(){

  
}

