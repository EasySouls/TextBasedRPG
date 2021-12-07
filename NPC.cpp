#include "NPC.h"
#include <string>
#include <iostream>
using namespace std;

NPC::NPC(string charName)
	: name(charName) {}

void NPC::Greet()
{
	cout << "Greeting traveler, I am " + name + "." << endl;
}