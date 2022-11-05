#include "AirborneAttack.cpp"
#include "Ambush.cpp"
#include "Blockade.cpp"
#include "Flank.cpp"
#include "Fortification.cpp"
#include "HighGround.cpp"
#include "Minefield.cpp"
#include "Retreat.cpp"
#include "attackCommand.cpp"
#include "DefendCommand.cpp"
//#include "Military.cpp"

//#include "Command.cpp"
#include "HigherPowers.cpp"

int main()
{


    //Defensive strategies
    Fortification* Fort = new Fortification();
    HighGround* HG = new HighGround();
    Minefield* MF = new Minefield();
    Retreat Ret;

    //Atacking strategies
    AirborneAttack* ABA = new AirborneAttack();
    Ambush* Amb = new Ambush();
    Blockade* Block = new Blockade();
    Flank* Fla = new Flank();

    //Commands
    attackCommand myAttackCommand;
    DefendCommand myDefendCommand;

    /*
    attackCommand* myCommand1 = new attackCommand();
    Command* myCommand2 =  new Command();
    */

    //HigherPower
    HigherPowers* General = new HigherPowers();
    

    //Military Object
    Military myMilitary;

    //Attacking using different concrete Attack Strategies
    /*std::cout<<"******************************************************Attack******************************************************"<<std::endl;
    myCommand1->setaStrategy(ABA);
    myCommand1->attack();

    myCommand1->setaStrategy(Amb);
    myCommand1->attack();

    myCommand1->setaStrategy(Block);
    myCommand1->attack();

    myCommand1->setaStrategy(Fla);
    myCommand1->attack();

    std::cout<<"******************************************************************************************************************"<<std::endl;
    
    //Defending using different concrete Defend Strategies
    std::cout<<"******************************************************Defend******************************************************"<<std::endl;
    myCommand2->setdStrategy(Fort);
    myCommand2->defend();

    myCommand2->setdStrategy(HG);
    myCommand2->defend();

    myCommand2->setdStrategy(MF);
    myCommand2->defend();

    myCommand2->setdStrategy(&Ret);
    myCommand2->defend();

    std::cout<<"******************************************************************************************************************"<<std::endl;
    */

    //Testing the Command pattern and Startegy pattern

    //Attacking using the command pattern's invoker
    std::cout<<"**************************************************************Attack**************************************************************"<<std::endl;

    General->sendAttackInstruction(&myAttackCommand, "GENERAL : Use AirborneAttack Strategy", ABA, &myMilitary);
    General->sendAttackInstruction(&myAttackCommand, "GENERAL :Use Ambush attacking Strategy", Amb, &myMilitary);
    General->sendAttackInstruction(&myAttackCommand, "GENERAL :Use Blockade attacking Strategy", Block, &myMilitary);
    General->sendAttackInstruction(&myAttackCommand, "GENERAL :Use Flank attacking Strategy", Fla, &myMilitary);

    std::cout<<"**********************************************************************************************************************************"<<std::endl;
    //Defend using the command pattern's invoker
    std::cout<<"**************************************************************Defend**************************************************************"<<std::endl;

    General->sendDefendInstruction(&myDefendCommand, "GENERAL :Use Fortification Defensive Strategy", Fort, &myMilitary);
    General->sendDefendInstruction(&myDefendCommand, "GENERAL :Use HighGround Defensive Strategy", HG, &myMilitary);
    General->sendDefendInstruction(&myDefendCommand, "GENERAL :Use Minefield Defensive Strategy", MF, &myMilitary);
    General->sendDefendInstruction(&myDefendCommand, "GENERAL :Retreat Men!!", &Ret, &myMilitary);

    std::cout<<"**********************************************************************************************************************************"<<std::endl;





    delete ABA;
    delete Fort;
    delete Amb;
    delete Fla;
    delete Block;
    delete HG;
    delete MF;
    //delete myCommand1;
    //delete myCommand2;
    delete General;
    




}