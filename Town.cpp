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
	switch
}