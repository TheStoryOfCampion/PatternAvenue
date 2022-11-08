#include <iostream>
//#include <vector>
#include <sstream>

#include "Uniform.h"
 Uniform::Uniform(){

    military=0;
 }
  void Uniform:: getDressed(Military*clothes){
    cout<<"Military soldier getting dressed and now wearing ";
     cout<<clothes->getName()<<endl;
    

  }
 void  Uniform:: attackNow(AttackStrategy* A){}
  void  Uniform:: defendNow(DefenseStrategy* A){}
   string  Uniform:: getName(){  
    

    return name;
   }
  
 
