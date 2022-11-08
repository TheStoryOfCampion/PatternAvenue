#include "AirForce.h"
 AirForce::AirForce(){}
void AirForce::attackNow(AttackStrategy* AS)
{
    AS->attack();
}

void AirForce::defendNow(DefenseStrategy* DS)
{
    DS->defend();
}


void AirForce::getDressed(Military* clothes)
{}
string AirForce::getName(){

   return "";

  }