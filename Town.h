#pragma once
#include <string>
#include "Tavern.h"
#include "NPC.h"
using namespace std;

class Town
{
public:
	Town(string townName);
	void ChooseAction();
	void GoToTavern();
	void GoToBlacksmith();
	void GoAdventuring();
	string name;
};

