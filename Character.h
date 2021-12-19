#pragma once
#include <string>
#include <iostream>
using namespace std;

class Character
{
	string playerClass;
	string playerRace;
	int level;

public:
	Character(string nm, int classChoice, int raceChoice);
	string GetName();
	string GetClass();
	string GetRace();

	// Attributes
	string name;
	int attack;
	int health;
	int mana;
	int armor;
	int strength, dexterity, constitution, intelligence, wisdom, charisma;
};

