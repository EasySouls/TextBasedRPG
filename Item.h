#pragma once
#include <string>
using namespace std;

class Item
{
public:
	Item(string name);
protected:
	string name;
	virtual void Use();
};

