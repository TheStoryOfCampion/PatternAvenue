#include <gtest/gtest.h>
#include "AirborneAttack.h"
#include "Ambush.h"
#include "AttackStrategy.h"
#include "DefenseStrategy.h"
#include "Blockade.h"
#include "Minefield.h"
#include "Retreat.h"

#include "HigherPowers.h"

#include "attackCommand.h"
#include "DefendCommand.h"
#include "Army.h"

namespace
{
	TEST(StrategyTest, attack)
	{
		//Atacking strategies
		AirborneAttack* ABA = new AirborneAttack();

		attackCommand myAttackCommand;
		DefendCommand myDefendCommand;

		HigherPowers* General = new HigherPowers();
		
		//Military Object
		Military* myMilitary = new Army();
		
		General->sendAttackInstruction(&myAttackCommand, "GENERAL : Use AirborneAttack Strategy", ABA, myMilitary);
		
		
  }
}