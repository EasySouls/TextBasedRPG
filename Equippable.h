#pragma once
#include "Item.h"
class Weapon 
{
public:
	Weapon(string name, int str, int dex, int con, int intlg, int wis, int cha);
	string name;
	int strength, dexterity, constitution, intelligence, wisdom, charisma;
	virtual void Attack();
};

