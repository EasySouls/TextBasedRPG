#include "Town.h"
#include <iostream>
using namespace std;

Town::Town(string townName)
	: name(townName) {}

void Town::GoToTavern()

{
	Tavern tavern("The Golden Sturgeon");
	NPC bartender("Gideon");
	cout << "You stepped in the " << tavern.name << " .What do you want to do ? " << endl;
	cout << "Type '1' if you want to talk to the bartender." << endl;
	cout << "type '2' if you want to sit down to a table." << endl;
	int option;
	cin >> option;
	switch (option)
	{
	case 1:
		cout << "You step to the counter and greet the bartender." << endl;
		cout << bartender.Greet() << " - says the bartender." << endl;
		break;
	case 2:
		cout << "You pick a nice table and sit down to it." << endl;
		// table functions
		break;
	default:
		GoToTavern();
	}
}

void Town::GoToBlacksmith()
{
	cout << "You are going to the blacksmith." << endl;
}

void Town::GoAdventuring()
{
	cout << "You are going adventuring." << endl;
}

void Town::ChooseAction()
{
	cout << "What do you wanna do?" << endl;
	cout << "Type '1' to go to the tavern." << endl;
	cout << "Type '2' to go to the blacksmith." << endl;
	cout << "Type '3' to go adventuring." << endl;
	int action;
	cin >> action;
	switch (action)
	{
	case 1:
		GoToTavern();
		break;
	case 2:
		GoToBlacksmith();
		break;
	case 3:
		GoAdventuring();
		break;
	default:
		cout << "Sadly, that is not a valid action." << endl;
		break;
	}
}