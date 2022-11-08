#ifndef MILITARY_H
#define MILITARY_H
#include<string>
using namespace std;

class Military{
private:
Military *next;
Military *prev;
string soldier;
  
  
 public:

 virtual void attackNow()=0;
 virtual void  defendNow()=0;
 virtual void  getDressed(Military* clothes)=0;
 virtual string getName()=0;


 };
 #endif

