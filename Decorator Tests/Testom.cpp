#include "ArmyUniform.h"
#include "AirForceUniform.h"
#include "NavyUniform.h"
#include<string>
#include <gtest/gtest.h>

 /*
    Test if military can wear different types of uniform
 */
namespace
{
	TEST(Military, armyUniform)
	{ 
         Military *AMilitary;
		AMilitary->getDressed(new ArmyUniform());
		
		EXPECT_TRUE(AMilitary);
		
	}
	
	TEST(Military, NavyUniform)
	{
		 Military *NavyMilitary;
		  NavyMilitary->getDressed(new NavyUniform());
		
		EXPECT_TRUE(NavyMilitary);
		
	}
	
	TEST(Military, AirForceUniform)
	{  
        
		 Military *AirForceMilitary;
		  AirForceMilitary->getDressed(new AirForceUniform());
		
		EXPECT_TRUE(AirForceMilitary);
		
	}
}