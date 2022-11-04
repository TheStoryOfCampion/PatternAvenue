#ifndef ARMY_H
#define ARMY_H
#include "Military.h"
#include <iostream>
using namespace std;

class Army: public Military
{
	public:
		void attackNow();
		void defendNow();
		void getDressed(Military* clothes){};
		void addWeapons(Military* m){};
		void launchMissile(){};
};

#endif