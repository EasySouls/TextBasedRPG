#include "Character.h"
#include <string>
#include <iostream>
using namespace std;

Character::Character(string nm, int lvl, int atk, int hp, int res)
	: name(nm), level(lvl), attack(atk), health(hp), armor(res)
{}

string Character::GetName()
{
	return name;
}
