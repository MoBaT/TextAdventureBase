#pragma once
#include "Item.h"

class Weapon : public Item
{

public:
	enum attributes {ARMOR, STRENGTH, DEXTERITY, INTELLIGENCE, VITALITY, DAMAGE, STRIKES, MAX_STRIKE};
	Weapon(std::string name, int Armor, int dmg, int str, int dex, int intel, int vit, int strikes, int MAX_STRIKES, itemType iT = WEAPON);
	~Weapon(void);
	int returnAttribute(attributes attribute);
private:
	int strikes;
	int MAX_STRIKES;
protected:
	int armor;
	int damage;
	int strength;
	int dexterity;
	int intelligence;
	int vitality;

};

