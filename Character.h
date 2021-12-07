#pragma once
#include <string>
#include <iostream>
using namespace std;

class Character
{
public:
	Character(string nm, int lvl, int atk, int hp, int res);
	string GetName();
private:
	string name;
	int level;
	int attack;
	int health;
	int armor;
};

