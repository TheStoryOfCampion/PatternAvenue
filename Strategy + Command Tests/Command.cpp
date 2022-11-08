#include "Command.h"
#include <iostream>

Command::Command(){}

Command::~Command(){}

void Command::setMilitary(Military * M)
{
    myMilitary = M;
}

/*
void Command::setaStrategy(AttackStrategy* AS)
{
    aStrategy = AS;
}

void Command::setdStrategy(DefenseStrategy* DS)
{
    dStrategy = DS;
}

void Command::attack()
{
    aStrategy->attack();
}

void Command::defend()
{
    dStrategy->defend();
}*/
