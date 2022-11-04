#include "HigherPowers.h"


//using namespace std;

void HigherPowers::sendAttackInstruction(Command* C, std::string myString,AttackStrategy* S , Military* mili){

    //C->setaStrategy(S);
    std::cout<<myString<<std::endl;
    C->setMilitary(mili);
    C->attackInstruction(S);
}

void HigherPowers::sendDefendInstruction(Command* C, std::string myString,DefenseStrategy* D, Military* milit ){

    //C->setdStrategy(D);
    std::cout<<myString<<std::endl;
    C->setMilitary(milit);
    C->defendInstruction(D);
    
    

}
