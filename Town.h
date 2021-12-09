#pragma once
#include <string>
#include "Tavern.h"
using namespace std;

class Town
{
public:
	Town(string townName);
	void ChooseAction();
	void GoToTavern();
	void GoToBlacksmith();
	void goAdventuring();
	string name;
};

