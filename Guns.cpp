#include "Guns.h"
using namespace std;

 Guns::Guns(string Guntype){

 this->Guntype=Guntype;

 }
  Guns::Guns(const Guns& gunt){

  Guntype= gunt.Guntype;

 }
 Guns*Guns::Clone(){
   return new Guns(*this);

 }
