#include "Military.h"

void Military::attackNow(AttackStrategy* AS)
{
    AS->attack();
}

void Military::defendNow(DefenseStrategy* DS)
{
    DS->defend();
}