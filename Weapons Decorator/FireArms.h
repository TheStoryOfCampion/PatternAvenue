#ifndef FIREARMS_H
#define FIREARMS_H
#include "Weapons.h"

class FireArms: public Weapons
{
	private:
		int ammunition;
		Military* military;
	
	public:
		FireArms();
		void addWeapons(Military* m);
};
#endif