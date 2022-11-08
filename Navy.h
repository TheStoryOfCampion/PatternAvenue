#ifndef NAVY_H
#define NAVY_H
#include "Military.h"

class Miltary ;

/**
 * @brief Inherites from the Military class
 * @name Navy
 * @author Amanda Khuzwayo
 * 
 */
class Navy: public Military
{
	public:
	/**
	 * @brief Construct a new Navy object
	 * 
	 */
		Navy();

		/**
		 * @brief used to attack the enemy using the attack strategy required
		 * 
		 * @param DS 
		 */
		virtual void attackNow(AttackStrategy* DS);

		/**
		 * @brief used to defend against the enemy using the defend strategy required
		 * 
		 * @param DS 
		 */
		virtual void defendNow(DefenseStrategy* DS);

		/**
		 * @brief Get the Military object
		 * 
		 * @param clothes 
		 */
		virtual void getDressed(Military* clothes);

		/**
		 * @brief Get the Name of the object
		 * 
		 * @return string 
		 */
		 virtual string  getName();
};

#endif