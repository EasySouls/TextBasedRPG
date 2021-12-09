#include "Tavern.h"

Tavern::Tavern(string tavernName)
	:name(tavernName) {}

void Tavern::DefDrinks(string tavernDrinks[])
{
	int arrSize = sizeof(tavernDrinks) / sizeof(tavernDrinks[0]);
	for (int i = 0; i < arrSize; i++)
	{
		drinks[i] = tavernDrinks[i];
	}
}

void Tavern::ChooseDrink()
{
	DefDrinks({});
	// Choosing a drink
}

void Tavern::SpeakWithBartender()
{
	NPC bartender("The bartender");
	cout << "You go to speak to the bartender" << endl;
}