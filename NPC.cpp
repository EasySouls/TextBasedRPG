#include "NPC.h"
#include <string>
#include <iostream>
using namespace std;

NPC::NPC(string charName)
	: name(charName) {}

string NPC::Greet()
{
	return "Greetings traveler, I am " + name + ".";
}