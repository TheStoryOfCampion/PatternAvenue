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
  cout<< count<<endl;
  country = count;
}

string Census::threatReport(int i){

threat = i;

  if(threat > 0 && threat <= 1){

    //cout<< "Threat is looming"<<endl;
    return "Threat is looming";
  }else if(threat > 1 ){

    //cout<< "Danger!!...Take Cover!!"<<endl;
    return "Danger!!...Take Cover!!";
  }else{
     //cout<< "There is no threat"<<endl;
    return "There is no threat.";
  }

}

void Census::go(){

cout<<"Country: "<<country<<endl;
cout<<"Population: "<<population<<endl;
cout<<"Threat Status: "<<threatReport(threat);
  
}

