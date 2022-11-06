#include "Military.h"
#include "Army.h"
#include "Navy.h"
#include "AirForce.h"
#include "MilitaryFactory.h"
#include "ArmyFactory.h"
#include "NavyFactory.h"
#include "AirForceFactory.h"
#include <iostream>
using namespace std;

int main()
{
	
	MilitaryFactory* armyFactory = new ArmyFactory();
	MilitaryFactory* navyFactory = new NavyFactory();
	MilitaryFactory* airforceFactory = new AirForceFactory();
	
	
	Military* army1 = armyFactory->EnlistSoldiers();
	Military* navy1 = navyFactory->EnlistSoldiers();
	Military* airforce1 = airforceFactory->EnlistSoldiers();
	
	
	army1->attackNow();
	navy1->attackNow();
	airforce1->attackNow();
	
	
	
	
	
	
	
	
	return 0;
}