#ifndef MILITARY_H
#define MILITARY_H
#include <string>
#include <iostream>
using namespace std;

class Military
{
	private:
		Military *next;
		Military *prev;
	
	  
	public:
		virtual void attackNow()=0;
		virtual void  defendNow()=0;
		virtual void  getDressed(Military* clothes)=0;
		virtual void addWeapons(Military* m)=0;
 };
 #endif

