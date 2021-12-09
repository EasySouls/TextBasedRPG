#pragma once
#include <string>
#include "Tavern.h"
using namespace std;

class Town
{
public:
	Town(string townName);
	void GoToTavern();
	void GoToBlacksmith();
	void GoAdventuring();
protected:
	string name;
};

