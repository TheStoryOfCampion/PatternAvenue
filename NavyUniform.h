#ifndef NAVYUNIFORM_H
#define NAVYUNIFORM_H
#include "Uniform.h"

/**
 * @brief A factory that creates Navy uniform objects
 * @name NavyFactory
 * @author Katleho Moeletsi
 * 
 */
class NavyUniform: public Uniform { 
private:
 string name;

   
 public:

 /**
  * @brief Construct a new Navy Uniform object
  * 
  */
   NavyUniform();

   /**
    * @brief Get the Name object
    * 
    * @return string 
    */
   string getName();
   



 };
 #endif