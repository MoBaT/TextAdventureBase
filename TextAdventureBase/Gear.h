#pragma once
#include "Inventory.h"
#include "Armor.h"

class Gear
{
public:
	Gear();
	~Gear(void);
	void equipWeapon(Weapon* &weapon);
	void unequipWeapon();
	void equipArmor(Armor* &Armor);
	void unequipArmor(Armor* &armor);
	void equipSkill(Skill* &skill);
	void unequipSkill(Skill* &skill);
	Inventory* inventory;

private:
	int strength;
	int dexterity;
	int damage;
	int intelligence;
	int vitality;
	int armor;
	double blockPercentage;
	Weapon* playerWeapon;
	std::vector<Armor*>Armors;
	std::vector<Skill*>skills;
};

