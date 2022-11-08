#ifndef UNIFORM_H
#define UNIFORM_H
#include "Military.h"
class Uniform:public Military{
private:

Military *military;
   
string name;
 public:
   Uniform();
  virtual  void  getDressed(Military*);
  virtual void attackNow();
 virtual void  defendNow();
 virtual string  getName();

 };
 #endif
