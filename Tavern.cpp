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