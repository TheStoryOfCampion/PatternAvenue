#ifndef ARMY_H
#define ARMY_H
#include "Military.h"
#include <iostream>
using namespace std;

/**
 * 
 @brief Initiates the army  
 @name Army class that inherits from military
 @author Lethlogogonolo Simon Rakgantsho 
 * 
 */

class Army: public Military
{
	public:
	/**
	 * @brief Construct a new Army object
	 * 
	 */
    Army();
	/**
		 * @brief initiates attack now strategy
		 * 
		 * @param A gets object of type AttackStrategy
		 */
		virtual void attackNow(AttackStrategy* A);
		/**
		 * @brief Initiates defence stategy
		 * 
		 * @param DS gets object of type Defence strategy
		 */
		virtual void defendNow(DefenseStrategy* DS);
		/**
		 * @brief Get the Dressed object
		 * 
		 * @param clothes Get clothes of type military 
		 */
		virtual void getDressed(Military* clothes);
		/**
		 * @brief Get the Name object
		 * 
		 * @return string 
		 */
         virtual string  getName();
};

#endif