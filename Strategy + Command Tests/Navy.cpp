#include "Navy.h"
using namespace std;
#include <string>

 Navy::Navy(){


 }


void Navy::attackNow(AttackStrategy* AS)
{
    AS->attack();
}

void Navy::defendNow(DefenseStrategy* DS)
{
    DS->defend();
}


void Navy::getDressed(Military* clothes)
{}
 string Navy::getName(){
  return "";

  }
