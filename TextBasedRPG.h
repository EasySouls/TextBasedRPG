#pragma once
#include <string>
#include  "Town.h"
using namespace std;

// Strings
string introLines = "This is where your adventure starts. \n You wake up, dazzled, in a ruined building. You can't remember how you got there. Your head is still aching, though you do not know why. \n After a few seconds have passed, your memory starts to return.";
string playerName;

// Integers
int ageInput;

// Booleans
bool isCsaba = false;

// Functions
void GoToTown()
{
	cout << "You are going to the town." << endl;
	Town town("Avalor");
	Sleep(500);
	cout << "As you walk amongst the walls of " << town.name << ", you admire the variety of the city." << endl;
	cout << "When you reach the main square, you see a blacksmith and a tavern." << endl;
	town.ChooseAction();
}

void GoAdventuring()
{
	cout << "You are going adventuring" << endl;
}

void DecideAction()
{
	cout << "What do you wanna do next?" << endl;
	cout << "Type '1' to go to the town." << endl;
	cout << "Type '2' to go adventuring." << endl;
	int action;
	cin >> action;
	switch (action)
	{
	case 1:
		GoToTown();
		break;
	case 2:
		GoAdventuring();
		break;
	default:
		cout << "This is not a valid option" << endl;
		DecideAction();
		break;
	}
}



