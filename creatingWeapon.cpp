#include "creatingWeapon.h"
#include <iostream>

using namespace std;

void creatingWeapon::helpus(ConcreteGuns* Gu){
    g = Gu->Clone();
    cout<<"Weapons created " <<endl;

}