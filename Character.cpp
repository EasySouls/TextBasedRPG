#include "Character.h"
#include <string>
#include <iostream>
using namespace std;

Character::Character(string nm, int classChoice, int raceChoice)
{
	this.name = nm;

	// Class selector
	if (classChoice == 1)
	{
		playerClass = "Warrior";
		level = 1;
		strength = 15;
		dexterity = 11;
		constitution = 14;
		intelligence = 10;
		wisdom = 10;
		charisma = 13;
	}
	else if (classChoice == 2)
	{
		playerClass = "Mage";
		level = 1;
		strength = 10;
		dexterity = 13;
		constitution = 14;
		intelligence = 16;
		wisdom = 12;
		charisma = 13;
	}
	else if (classChoice == 3)
	{
		playerClass = "Archer";
		level = 1;
		strength = 12;
		dexterity = 16;
		constitution = 14;
		intelligence = 12;
		wisdom = 11;
		charisma = 13;
	}
	else if (classChoice == 4)
	{
		playerClass = "Rogue";
		level = 1;
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
		charisma++;
		intelligence++;
	}
	else if (raceChoice == 2)
	{
		playerRace = "Elf";
		dexterity++;
		wisdom++;
	}
	else if (raceChoice == 3)
	{
		playerRace = "Dwarf";
		constitution++;
		strength++;
	}

	// Stats based on base stats
	this.health = 10 + (constitution / 2);
	this.armor = 6 + (dexterity / 2);
	
	if (strength >= dexterity) {
		this.attack = 8 + (strength / 2);
	} if else (dexterity >= strength) {
		this.attack = 8 + (dexterity / 2);
	}

	if (intelligence >= wisdom) {
		mana = 1 + (intelligence / 3);
	} if else (wisdom >= intelligence) {
		mana = 1 + (wisdom / 3);
	}


}

void Character::ShowAttributes()
{
	cout << endl << "Your attributes are: \nStrength: " << strength << ",\nDexterity: " << dexterity << ",\nCnstitution: " << constitution << ",\nIntelligence: " << intelligence << ",\nWisdom: " << wisdom << ",\nCharisma: " << charisma << endl;
}

string Character::GetName()
{
	return name;
}

string Character::GetClass()
{
	return playerClass;
}

string Character::GetRace()
{
	return playerRace;
}
