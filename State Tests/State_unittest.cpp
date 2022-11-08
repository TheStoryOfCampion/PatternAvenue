#include <gtest/gtest.h>
#include <iostream>
#include <string>
#include <vector>
#include "Enlisted.h"
#include "Fleeing.h"
#include "Reserve.h"
#include "Refugee.h"

namespace
{
	TEST(EnlistedStateTest, stateValue)
	{
		CivilianContext* context = new CivilianContext();
		context->setState(new Enlisted());
		
		EXPECT_EQ("Enlisted", context->getState());
	}
	
	TEST(FleeingStateTest, stateValue)
	{
		CivilianContext* contexts = new CivilianContext();
		contexts->setState(new Fleeing());
		
		EXPECT_EQ("Fleeing", contexts->getState());
	}
	
	TEST(RefugeeStateTest, stateValue)
	{
		CivilianContext* contexts = new CivilianContext();
		contexts->setState(new Refugee());
		
		EXPECT_EQ("Refugee", contexts->getState());
	}
	
	TEST(ReserveStateTest, stateValue)
	{
		CivilianContext* contexts = new CivilianContext();
		contexts->setState(new Reserve());
		
		EXPECT_EQ("Reserve", contexts->getState());
	}
}