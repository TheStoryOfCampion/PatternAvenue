#ifndef WEAPONS_H
#define WEAPONS_H
#include "Military.h"

class Weapons: public Military
{
	private:
		Military* military;
	
	public:
		Weapons(){};
		virtual ~Weapons(){};
		virtual void addWeapons(Military* m);
};
#endif