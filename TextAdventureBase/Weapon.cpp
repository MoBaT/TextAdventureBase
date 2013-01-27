#include "Weapon.h"


Weapon::Weapon(std::string name, int Armor, int dmg, int str, int dex, int intel, int vit, int strike, int MAX_strike, itemType iT)
{
	itemName = name;
	itemT = iT;
	armor = Armor;
	damage = dmg;
	strength = str;
	dexterity = dex;
	intelligence = intel;
	vitality = vit;
	strikes = strike;
	MAX_STRIKES = MAX_strike;
}


Weapon::~Weapon(void)
{
}

int Weapon::returnAttribute(attributes attribute)
{
	switch (attribute) 
	{
		case ARMOR:
			return armor;
		case STRENGTH:
			return strength;
		case DEXTERITY:
			return dexterity;
		case INTELLIGENCE:
			return intelligence;
		case VITALITY:
			return vitality;
		case DAMAGE:
			return damage;
		case STRIKES:
			return strikes;
		case MAX_STRIKE:
			return MAX_STRIKES;
	}
	return 0;
}