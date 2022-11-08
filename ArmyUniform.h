#ifndef ARMYUNIFORM_H
#define ARMYUNIFORM_H
#include "Uniform.h"

/**
  * @brief  Initiates an Army Uniform 
  * @author Initiates an Airborne attack strategy 
  * @name Katleho Moeletsi
  * 
  */
class ArmyUniform: public Uniform { 
private:

string name;
 
 public:
 /**
  * @brief Construct a new Army Uniform object
  * 
  */
   ArmyUniform();
   /**
    * @brief Get the Dressed object
      @param Military has a gets uniform to get dressed in
    * 
    */
   void getDressed(Military*);
   /**
    * @brief gets attack object
    * 
    */
   void attackNow();
   /**
    * @brief gets defend object 
    * 
    */
   void defendNow();
   /**
    * @brief Get the Name object
    * 
    * @return string 
    */
  string getName();
   



 };
 #endif