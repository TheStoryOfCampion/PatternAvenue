#ifndef MISSILE_H
#define MISSILE_H
#include "Weapons.h"

class Missile: public Weapons
{
	private:
		bool launched;
		Military* military;
	
	public:
		Missile();
		void addWeapons(Military* m);
};
#endif
		