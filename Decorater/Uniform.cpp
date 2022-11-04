#include <iostream>
//#include <vector>
#include <sstream>

#include "Uniform.h"
 Uniform::Uniform(){

    military=0;
 }
  void Uniform:: getDressed(Military*clothes){
    cout<<"Military soldier getting dressed and now wearing   ";
    cout<<clothes->getName()<<endl;
    

  }
 void  Uniform:: attackNow(){}
  void  Uniform:: defendNow(){}
   string  Uniform:: getName(){  
    

    return name;
   }
  
 
