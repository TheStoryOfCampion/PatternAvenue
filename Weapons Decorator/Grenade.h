#ifndef GRENADE_H
#define GRENADE_H
#include "Weapons.h"

class Grenade: public Weapons
{
	private:
		bool detonated;
		Military* military;
	
	public:
		Grenade();
		void addWeapons(Military* m);
};
#endif