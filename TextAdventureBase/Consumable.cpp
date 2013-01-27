#include "Consumable.h"

Consumable::Consumable(std::string name, int hp, int MANA)
{
	itemT = CONSUMABLE;
	itemName = name;
	health = hp;
	mana = MANA;
}

int Consumable::returnType(type Type)
{
	switch (Type)
	{
		case HEALTH:
			return health;
			break;
		case MANA:
			return mana;
			break;
	}
	return 0;
}