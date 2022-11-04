#include "ArmyUniform.h"
#include "AirForceUniform.h"
#include "NavyUniform.h"
using namespace std;
#include<string>

int main(){

  //testing main

   Military *AMilitary;
   AMilitary=new ArmyUniform();
   AMilitary->getDressed(new ArmyUniform());
    AMilitary->getDressed(new NavyUniform());
     AMilitary->getDressed(new AirForceUniform());

        
   


}