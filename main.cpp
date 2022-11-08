#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>
#include <stdlib.h>
#include<iomanip>

#define YELLOW "\053[53m"  
#define RESET   "\033[0m"
#define BLUE    "\033[34m" 
#define PURPLE    "\033[34m" 
     /* Blue */
#define MAGENTA "\033[35m"      /* Magenta */
#define CYAN    "\033[36m"      /* Cyan */
#define WHITE   "\033[37m"      /* White */
#define BOLDBLACK   "\033[1m\033[30m"      /* Bold Black */
#define BOLDRED     "\033[1m\033[31m"      /* Bold Red */
#define BOLDGREEN   "\033[1m\033[32m"      /* Bold Green */
#define BOLDYELLOW  "\033[1m\033[33m"      /* Bold Yellow */
#define BOLDBLUE    "\033[1m\033[34m"      /* Bold Blue */
#define BOLDMAGENTA "\033[1m\033[35m"      /* Bold Magenta */
#define BOLDCYAN    "\033[1m\033[36m"      /* Bold Cyan */
#define BOLDWHITE   "\033[1m\033[37m"
#include"Country.h"
#include "ArmyFactory.h"
#include "AirForceFactory.h"
#include "NavyFactory.h"
#include "Army.h"
#include "AirForce.h"
#include "Navy.h"
#include"ArmyUniform.h"
#include"AirForceUniform.h"
#include"NavyUniform.h"
#include"AirForce.h"
#include "HigherPowers.h"
#include "attackCommand.h"
#include "DefendCommand.h"
#include "AirborneAttack.h"
#include "Ambush.h"
#include "Blockade.h"
#include "Flank.h"
#include "Fortification.h"
#include "HighGround.h"
#include "Minefield.h"
#include "Retreat.h"
#include "Census.h" 
#include "Civilians.h"
#include "Enlisted.h"
#include "Fleeing.h"
#include "Reserve.h"
#include "Refugee.h"
#include "creatingWeapon.h"
#include "ConcreteGuns.h"






using namespace std;
//  void createMilitary(string pc ){
//   ArmyFactory* myArmyFactory = new ArmyFactory();
// Military* myPlayerArmy =new Army();
// myPlayerArmy =  myArmyFactory->EnlistSoldiers();
  
// cout<<pc<<" Army has been created"<<endl;
// NavyFactory* myNavyFactory = new NavyFactory();
// Military* myPlayerNavy =new Navy();
// myPlayerArmy =  myNavyFactory->EnlistSoldiers();

// cout<<pc<<" Navy has been created"<<endl;

// AirForceFactory* myAirFactory = new AirForceFactory();
// Military* myPlayerAirForce =new AirForce();
// myPlayerAirForce =  myAirFactory->EnlistSoldiers();
// cout<<pc<<" Airforce has been created"<<endl;
  
int defense_counter=0;
int PlayerCounter=0;
int EnemyCounter=0;
int limitCounter =0;

//  }
 void GameOn(int In,int randomNumber){

if((In == 1 && randomNumber == 4)|| (In==1&& randomNumber==3))
{
  cout<<endl;
  cout<<"********************Player Won this battle****************"<<endl;
  PlayerCounter+=1;

}
else if(In==2&&randomNumber==3|| (In==2&& randomNumber==1)){
    
  cout<<endl;
  cout<<"********************Player Won this battle****************"<<endl;
  PlayerCounter+=1;

}

else if(In==3&&randomNumber==4){

  cout<<endl;
  cout<<"********************Player Won this battle****************"<<endl;
  PlayerCounter+=1;


}
else if(In==4&&randomNumber==2){

  cout<<endl;
  cout<<"********************Player Won this battle****************"<<endl;
  PlayerCounter+=1;


}
else if((In == 4 && randomNumber == 1)|| (In==3&& randomNumber==1))
{
  cout<<endl;
  cout<<"********************Enemy Won this battle****************"<<endl;
  EnemyCounter+=1;

}
else if(In==3&&randomNumber==2|| (In==1&& randomNumber==2)){
    
  cout<<endl;
  cout<<"********************Enemy Won this battle****************"<<endl;
  EnemyCounter+=1;

}

else if(In==4&&randomNumber==3){
  cout<<endl;
  cout<<"********************Enemy Won this battle****************"<<endl;
  EnemyCounter+=1;


}
else if(In==2&&randomNumber==4){
  cout<<endl;
  cout<<"********************Enemy Won this battle****************"<<endl;
  EnemyCounter+=1;

}
else{
  cout<<endl;
  cout<<"**************Battle Continues******"<<endl;
}


 



 }
 Military*createArmy(string pc){
 ArmyFactory* myArmyFactory = new ArmyFactory();
Military* myPlayerArmy =new Army();
myPlayerArmy =  myArmyFactory->EnlistSoldiers();
cout<<pc<<" Army has been created"<<endl;
  return myPlayerArmy;

 }
 Military* createNavy(string pc){
 
  NavyFactory* myNavyFactory = new NavyFactory();
Military* myPlayerNavy =new Navy();
myPlayerNavy =  myNavyFactory->EnlistSoldiers();
cout<<pc<<" Navy has been created"<<endl;
return myPlayerNavy;
 }
 Military*createAirForce(string pc){
 
AirForceFactory* myAirFactory = new AirForceFactory();
Military* myPlayerAirForce =new AirForce();
myPlayerAirForce =  myAirFactory->EnlistSoldiers();
cout<<pc<<" AirForce has been created"<<endl;
  return myPlayerAirForce;

 }


 void CallStrategy(int in, Military* Milit, string g)
 {
    HigherPowers General;
    attackCommand myAttackCommand;
    DefendCommand myDefendCommand;

    string G = g;
    if(in == 1)
    { 
      
      G += " : Use the Airborne Attack Strategy ";
      Fleeing* stateFlee = new Fleeing();
     cout<<"State of Soldiers: "<< stateFlee->getState()<<endl;
      AirborneAttack AB;
      General.sendAttackInstruction(&myAttackCommand, G,&AB, Milit);
       

    }
    else if(in == 2)
    { 

      G += " : Use the Ambush Attack Strategy";
      Ambush Amb;
      Refugee* stateRefuge = new Refugee();
      cout<<"State of Soldiers: "<< stateRefuge->getState()<<endl;
      stateRefuge->getState();
      General.sendAttackInstruction(&myAttackCommand, G,&Amb, Milit);
       

    }
    else if(in == 3)
    { 
      G += " : Use the Blockade Attack Strategy";
      Blockade Block;
      Enlisted* stateEnlisted = new Enlisted();
      cout<<"State of Soldiers: "<< stateEnlisted->getState()<<endl;
      stateEnlisted->getState();
      General.sendAttackInstruction(&myAttackCommand, G,&Block, Milit);
       

    }
    else if(in == 4)
    { 
      
      G += " : Use the Flank Attack Strategy";
      Flank fla;
      Fleeing* stateFlee2 = new Fleeing();
      cout<<"State of Soldiers: "<< stateFlee2->getState()<<endl;
      stateFlee2->getState();
      General.sendAttackInstruction(&myAttackCommand, G, &fla, Milit);
       

    }
    else if(in == 5)
    { 
      G += " : Use the Fortification Defense Strategy";
      Fortification Forty;
      Reserve* stateReserve = new Reserve();
      cout<<"State of Soldiers: "<< stateReserve->getState()<<endl;
      stateReserve->getState();
      General.sendDefendInstruction(&myDefendCommand, G,&Forty, Milit);

    }
    else if(in == 6)
    { 
      G += " : Use the High Ground Defense Strategy";
      HighGround HG;
      Fleeing* stateFlee = new Fleeing();
      cout<<"State of Soldiers: "<< stateFlee->getState()<<endl;
      stateFlee->getState();
      General.sendDefendInstruction(&myDefendCommand, G,&HG, Milit);

    }
    else if(in == 7)
    { 
      
      G += " : Use the MineField Defense Strategy";
      Minefield MF;
      Enlisted* stateEnlist1 = new Enlisted();
      cout<<"State of Soldiers: "<< stateEnlist1->getState()<<endl;
      stateEnlist1->getState();
      General.sendDefendInstruction(&myDefendCommand, G,&MF, Milit);

    }
    else if(in == 8)
    { 
      
      G += " : Use the Retreat Defense Strategy";
      Retreat Rt;
      Enlisted* stateEnlist1 = new Enlisted();
      cout<<"State of Soldiers: "<< stateEnlist1->getState()<<endl;
      stateEnlist1->getState();
      General.sendDefendInstruction(&myDefendCommand, G,&Rt, Milit);

    }

 }
 void DressTHem(Military* army)/*,NavyUniform* navy, Airf* Airforce*)*/{
    // army=new ArmyUniform();
    //Uniform armyUni = new Uniform();
  
   // NavyUniform* A = new NavyUniform();
    
    army->getDressed(new ArmyUniform());
    army->getDressed(new NavyUniform());
    army->getDressed(new AirForceUniform());
    
  
    // navy->getDressed(navy);
    //  Airforce->getDressed(AirForce);





 }
int main(){
  
string Playercountry, 
 EnemyCountry;
 int enter;
cout<<endl;



 cout<<BOLDYELLOW<<"*************Welcome to PatternAvenue War Simulation***************************************"<<RESET<<endl;
  // system("Color E4");
 // cout<<YELLOW<<"kman"<<RESET<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<"Please Enter  Player Country:  ";
cin>>Playercountry;
cout<<endl;
cout<<"Please Enter  Enemy Country:  ";
cin>>EnemyCountry;
cout<<endl;
  //creating countries
 Country PCountry(Playercountry);
 Country ECountry(EnemyCountry); 
 //create player military
 //Tinas Part

//Tinas Part
 cout<<endl;
  Military* PlayerArmy = createArmy(Playercountry);
  Military* PlayerAirForce = createAirForce(Playercountry);
  Military* PlayerNavy = createNavy(Playercountry);
  cout<<endl;
  //create enemy military
  Military* EnemyArmy = createArmy(EnemyCountry);
  Military* EnemyAirForce = createAirForce(EnemyCountry);
  Military* EnemyNavy = createNavy(EnemyCountry);
   
     cout<<endl;
   // dressing the army now 
   //ArmyUniform* armyUni =  new ArmyUniform();
   cout<<BOLDGREEN<<"**********Enemy getting dressed***************"<<endl;
     EnemyArmy=new ArmyUniform();
     DressTHem(EnemyArmy);
     cout<<endl;
    //Give Enemy Army Weapons
    cout<<"Enemy Soldiers ";
    ConcreteGuns* Guns1 = new ConcreteGuns("Riffle");
    creatingWeapon* newGuns1 = new creatingWeapon();
    newGuns1->helpus(Guns1);
    cout<<endl;
     cout<<BOLDCYAN<<"**********Player getting dressed****************"<<endl;
      PlayerArmy=new ArmyUniform();
      DressTHem(PlayerArmy);
      cout<<endl;
  
  //Give Player Army Weapons
  cout<<"Player Soldiers ";
  ConcreteGuns* Guns = new ConcreteGuns("Riffle");

  creatingWeapon* newGuns = new creatingWeapon();

  newGuns->helpus(Guns);
  cout<<RESET<<endl;

      for(int y=0;y<6;y++){

   cout<<"*******************Press 0 to show Strategies: ";
    cin>>enter;
    cout<<endl;

    cout<<"AttackStrategies:"<<endl;
    cout<<"1) Airborne Attack" <<endl;
    cout<<"2) Ambush" <<endl;
    cout<<"3) Blockade" <<endl;
    cout<<"4) Flank" <<endl;
    cout<<endl;
    cout<<"DefenseStrategies:"<<endl;
    cout<<"5) Fortification" <<endl;
    cout<<"6) High Ground "  <<endl;
    cout<<"7) MineField" <<endl;
    cout<<"8) Retreat" <<endl;
    cout<<endl;
  



int In;
cout<<"Choose a strategy :";
cin>>In;
cout<<endl;

int randomNumber;
int rangeRandNUm;

rangeRandNUm = 1 + (rand() % 3);

if(rangeRandNUm == 1)
{
  randomNumber =  1 + (rand() % 5);
}
else
{
  randomNumber =  5 + (rand() % 4);
}

//if(In <= 4)
//{
  
//}
//else{
//  randomNumber =  1 + (rand() % 5);
//}


if(In>=5&&In<=8){//defence
  
  defense_counter+=1;
}

if(randomNumber>=5&&randomNumber<=8){//A.I defence
  
  limitCounter+=1;
}

cout<<BLUE<<endl;
if(defense_counter<4  && limitCounter <5){

  if(In ==1)
  {
    CallStrategy(In, PlayerAirForce, "PLAYER GENERAL" );
  }
  else if(In ==2 || In == 4 || In == 5 || In == 6 || In == 7 || In == 8)
  {
    CallStrategy(In, PlayerArmy, "PLAYER GENERAL");
  }
  else if(In ==3)
  {
    CallStrategy(In, PlayerNavy, "PLAYER GENERAL");
  }
cout<<RESET<<endl;

 cout<<BOLDRED<<endl;
  if(randomNumber ==1)
  {
    CallStrategy(randomNumber,  EnemyAirForce, "ENEMY GENERAL" );
  }
  else if(randomNumber ==2 || randomNumber == 4 || randomNumber == 5 || randomNumber == 6 || randomNumber == 7 || randomNumber == 8)
  {
    CallStrategy(randomNumber, EnemyArmy, "ENEMY GENERAL");
  }
  else if(randomNumber ==3)
  {
    CallStrategy(randomNumber, EnemyNavy, "ENEMY GENERAL");
  }
  cout<<RESET<<endl;

  GameOn(In,randomNumber);

  cout<<endl;
   

}
else if(defense_counter>=4){

  cout<<"!!!!!! Player Surrenders!!!!!!!!"<<endl;
  cout<<"!!!!!! Game Over !!!!!!!!"<<endl;
  cout<<endl;
  Census* censusUpdate1 = new Census(3500000,Playercountry,3);
  censusUpdate1->go();
   y = 10;

}
else if(limitCounter >= 5)
{

  cout<<"!!!!!! Enemy Surrenders!!!!!!!!"<<endl;
  cout<<"!!!!!! Game Over !!!!!!!!"<<endl;
  cout<<endl;
  Census* censusUpdate2 = new Census(3500000,Playercountry,0);
  censusUpdate2->go(); 
  y = 10;

}



}

if (defense_counter < 4  && limitCounter <5){
 if(PlayerCounter>EnemyCounter){


  cout<<MAGENTA<<"!!!!!! Enemy Surrenders!!!!!!!!"<<endl;
   cout<<PURPLE<<"!!!!!! Game Over !!!!!!!!"<<endl;
   cout<<RESET<<endl;
    Census* censusUpdate4 = new Census(3500000,Playercountry,0);
    censusUpdate4->go();

 }
 else if(EnemyCounter>PlayerCounter){
cout<<MAGENTA<<"!!!!!! Player Surrenders!!!!!!!!"<<endl;
   cout<<PURPLE<<"!!!!!! Game Over !!!!!!!!"<<endl;
   cout<<RESET<<endl;
  Census* censusUpdate3 = new Census(3500000,Playercountry,3);
  censusUpdate3->go();
 }
 else{

  cout<<MAGENTA<<"!!!!!! Countries reach a Truce!!!!!!!!"<<endl;
   cout<<PURPLE<<"!!!!!! Game Over !!!!!!!!"<<endl;
   cout<<RESET<<endl;
   Census* censusUpdate5 = new Census(3500000,Playercountry,1);
  censusUpdate5->go();

 }
}

}




























