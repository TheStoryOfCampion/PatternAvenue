#include <gtest/gtest.h>
#include <limits.h>
#include <stdexcept>
#include "Military.h"
#include "Army.h"
#include "Navy.h"
#include "AirForce.h"
#include "MilitaryFactory.h"
#include "ArmyFactory.h"
#include "NavyFactory.h"
#include "AirForceFactory.h"

namespace
{
	/*
		Test if objects created 
	*/
	TEST(ArmyFactoryTest, armyObject)
	{
		MilitaryFactory* armyFactory = new ArmyFactory();
		Military* army = armyFactory->EnlistSoldiers();
		
		EXPECT_TRUE(army);
		
	}
	
	TEST(NavyFactoryTest, navyObject)
	{
		MilitaryFactory* navyFactory = new NavyFactory();
		Military* navy = navyFactory->EnlistSoldiers();
		
		EXPECT_TRUE(navy);
		
	}
	
	TEST(AirForceFactoryTest, airforceObject)
	{
		MilitaryFactory* airforceFactory = new AirForceFactory();
		Military* airforce = airforceFactory->EnlistSoldiers();
		
		EXPECT_TRUE(airforce);
		
	}
}