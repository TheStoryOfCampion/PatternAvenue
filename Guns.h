#ifndef GUNS_H
#define GUNS_H
using namespace std;
#include <string>

class Guns{
 
 public:
 Guns(string Gunt);
  virtual Guns *Clone();
 
 protected:
 Guns(const Guns&);
 string Guntype;
 


    

};
#endif