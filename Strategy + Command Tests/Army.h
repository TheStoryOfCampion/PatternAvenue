#ifndef ARMY_H
#define ARMY_H
#include "Military.h"
#include <iostream>
using namespace std;

class Army: public Military
{
	public:
    Army();
		virtual void attackNow(AttackStrategy* A);
		virtual void defendNow(DefenseStrategy* DS);
		virtual void getDressed(Military* clothes);
         virtual string  getName();
};

#endif