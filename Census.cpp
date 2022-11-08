#include "Census.h"
#include <iostream>
#include <string>
#include <vector>
#include <iostream>


using namespace std;


Census::Census(int popu, string countr, int thr){
    population = popu;
    country = countr;
    threat = thr;
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
 
  cout<<"Your Country Summary: "<<endl;
  cout<<"Country: "<<country<<endl;
  cout<<"Population: "<<population<<endl;
  cout<<"Threat Status: "<<threatReport(threat)<<endl;
}

