#pragma once
#include <string>
#include <iostream>
#include "NPC.h"
using namespace std;

class Tavern
{
public:
	Tavern(string tavernName);
	void DefDrinks(string tavernDrinks[]);
	void ChooseDrink();
	void SpeakWithBartender();
	string name;
	string drinks[];
	// number of quests available
};

