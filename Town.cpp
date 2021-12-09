#include "Town.h"
#include <iostream>
using namespace std;

Town::Town(string townName)
	: name(townName) {}

void Town::GoToTavern()
{
	Tavern tavern("The Golden Sturgeon");
	cout << "You stepped in the tavern. What do you want to do?" << endl;
	//options monologue
	int option;
	cin >> option;
	// add switch statement!
}

void Town::GoToBlacksmith()
{
	cout << "You are going to the blacksmith." << endl;
}

void goAdventuring()
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
		goAdventuring();
		break;
	default:
		cout << "Sadly, that is not a valid action." << endl;
		break;
	}
}