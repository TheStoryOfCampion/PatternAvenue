#ifndef MILITARY_H
#define MILITARY_H
#include "AttackStrategy.h"
#include"DefenseStrategy.h"
#include<string>
using namespace std;

/**
 * @brief Abstract class for the whole Military
 * @name Military
 * @author Amanda Khuzwayo
 * 
 */

class Military{
private:
Military *next;
Military *prev;
string soldier;
  
  
 public:

/**
 * @brief A pure virtual function
 * @return void
 * @param A 
 */
 virtual void attackNow(AttackStrategy* A)=0;
 /**
 * @brief A pure virtual function
 * @return void
 * @param A 
 */
 virtual void  defendNow(DefenseStrategy* A)=0;
 /**
 * @brief A pure virtual function
 * @return void
 * @param clothes
 */
 virtual void  getDressed(Military* clothes)=0;

 /**
 * @brief A pure virtual function
 * @return string
 */
 virtual string getName()=0;


 };
 #endif

