#ifndef UNIFORM_H
#define UNIFORM_H
#include "Military.h"

/**
 * @brief Military class to join all the army navy and airfoce
 * @name Military class
 * @author Katleho Moeletsi
 */


class Military;
class Uniform:public Military{
private:

Military *military;
   
string name;
 public:
 /**
  * @brief Construct a new Uniform object
  * 
  */
   Uniform();
    /**
    * @brief Get the Dressed object
    * 
    */
  virtual  void  getDressed(Military*);
  /**
   * @brief get dressed object
   * 
   * @param A gets an object of type attackStrategy
   */
  virtual void attackNow(AttackStrategy* A);
   /**
   * @brief get defendNow object
   * 
   * @param A gets an object of type defendStrategy
   */
 virtual void  defendNow(DefenseStrategy* A);
  /**
  * @brief Get the Name object
  * 
  * @return string 
  */
 virtual string  getName();

 };
 #endif
