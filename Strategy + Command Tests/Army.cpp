#include "Army.h"
using namespace std;
#include<string>
 Army::Army(){}
void Army::attackNow(AttackStrategy* AS)
{
    AS->attack();
}

void Army::defendNow(DefenseStrategy* DS)
{
    DS->defend();
}


void Army::getDressed(Military* clothes)
{}
  string Army::getName(){

   return "";

  }