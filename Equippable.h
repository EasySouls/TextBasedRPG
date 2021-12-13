#pragma once
#include "Item.h"
class Equippable
{
public:
	Equippable(string name, int str, int dex, int con, int intlg, int wis, int cha);
	string name;
	int strength, dexterity, constitution, intelligence, wisdom, charisma;
};

