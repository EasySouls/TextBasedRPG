#pragma once
#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>
#include "NPC.h"
#include "Character.h"
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
	void ShowAttributes();

	// Attributes
	string name;
	int attack;
	int health;
	int mana;
	int armor;
	int strength, dexterity, constitution, intelligence, wisdom, charisma;
};

