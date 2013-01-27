#pragma once
#include "Item.h"
class Consumable : public Item
{
public:
	enum type {HEALTH, MANA};
	Consumable(std::string name, int hp, int mana);
	int returnType(type Type);
private:
	int health;
	int mana;
};

