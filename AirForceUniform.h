#ifndef AIRFORCEUNIFORM_H
#define AIRFORCEUNIFORM_H
#include "Uniform.h"

/**
 @brief Initiates uniform for the airforce  
 @name AirforceUniform class inheriting from Uniform class
 @author Katleho Moeletsi
 * 
 */
class AirForceUniform: public Uniform { 
private:
 
 string name;

   
 public:
 /**
  * @brief Construct a new Air Force Uniform object
  * 
  */
   AirForceUniform();
   /**
    * @brief Get the Name object
    * 
    * @return string 
    */
   string getName();
   



 };
 #endif