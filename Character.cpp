#include "Character.h"
#include <string>
#include <iostream>
using namespace std;

Character::Character(string nm, int classChoice, int raceChoice)
{
	// Class selector
	if (classChoice == 1)
	{
		playerClass == "Warrior";
		level = 1;
		health = 16;
		mana = 4;
		armor = 0;
		strength = 15;
		dexterity = 11;
		constitution = 14;
		intelligence = 10;
		wisdom = 10;
		charisma = 13;
	}
	else if (classChoice == 2)
	{
		playerClass == "Mage";
		level = 1;
		health = 12;
		mana = 10;
		armor = 0;
		strength = 10;
		dexterity = 13;
		constitution = 14;
		intelligence = 16;
		wisdom = 12;
		charisma = 13;
	}
	else if (classChoice == 3)
	{
		playerClass == "Archer";
		level = 1;
		health = 13;
		mana = 7;
		armor = 0;
		strength = 12;
		dexterity = 16;
		constitution = 14;
		intelligence = 12;
		wisdom = 11;
		charisma = 13;
	}
	else if (classChoice == 4)
	{
		playerClass == "Rogue";
		level = 1;
		health = 14;
		mana = 5;
		armor = 0;
		strength = 14;
		dexterity = 16;
		constitution = 13;
		intelligence = 10;
		wisdom = 10;
		charisma = 15;
	}

	// Race selector
	if (raceChoice == 1)
	{
		playerRace = "Human";
	}
	else if (raceChoice == 2)
	{
		playerRace = "Elf";
	}
	else if (raceChoice == 3)
	{
		playerRace = "Dwarf";
	}
}

string Character::GetName()
{
	return name;
}

string Character::GetPlayerClass()
{
	return playerClass;
}

string Character::GetPlayerRace()
{
	return playerRace;
}
