#ifndef NAVY_H
#define NAVY_H
#include "Military.h"

class Navy: public Military
{
	public:
		void attackNow();
		void defendNow();
		void getDressed(Military* clothes);
};

#endif