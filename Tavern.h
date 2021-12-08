#pragma once
#include <string>
using namespace std;

class Tavern
{
public:
	Tavern(string tavernName);
	void DefDrinks(string tavernDrinks[]);
protected:
	string name;
	string drinks[];
	// number of quests available
};

