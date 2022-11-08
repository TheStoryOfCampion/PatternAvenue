#ifndef CIVILIANCONTEXT_H
#define CIVILIANCONTEXT_H
#include "CivilianState.h"

#include <iostream>

using namespace std;

/**
 * @brief Gets the State of the soldiers in battle.
   @name  CivilianContext
   @author  Tinayeshe Mugwagwa 
 * 
 */


class CivilianState;

class CivilianContext {
public: 
	/**
	 * @brief Construct a new Civilian Context object
	 * 
	 */
    CivilianContext();
	/**
	 * @brief Destroy the Civilian Context object
	 * 
	 */
	~CivilianContext();
	/**
	 * @brief changes the state of the object
	 * 
	 */

	void change();

	/**
	 * @brief Get the Civilian object
	 * 
	 * @return string 
	 */
	
  	string getCivilian();
	/**
	 * @brief Set the State object
	 * 
	 * @param state 
	 */
	void setState(CivilianState* state);
  
  
  
  private: 
    CivilianState * state;


};

#endif


