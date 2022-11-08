#include <iostream>
//#include <vector>
#include <sstream>
using namespace std;
#include "ArmyUniform.h"
ArmyUniform:: ArmyUniform():Uniform(){
       name="ArmyUniform";
   


   
   }
   void ArmyUniform::attackNow(){

   }
   void ArmyUniform::defendNow(){

   }
   void ArmyUniform::getDressed(Military* u){
     cout<<"Military soldier getting dressed and now wearing ";
     cout<<u->getName()<<endl;
    

   }
   string ArmyUniform:: getName(){
 return name;
 }

  