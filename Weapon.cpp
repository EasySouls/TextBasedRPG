#include "Equippable.h"

Weapon::Weapon(string name, int str, int dex, int con, int intlg, int wis, int cha)
	: name(name), strength(str), dexterity(dex), constitution(con), intelligence(intlg), wisdom(wis), charisma(cha) {}