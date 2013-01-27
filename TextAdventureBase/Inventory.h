#pragma once
#include <vector>
#include "Armor.h"
#include "Consumable.h"
#include "Miscellaneous.h"
#include "Skill.h"

class Inventory
{
public:
	enum type {WEAPON, ARMOR, CONSUMABLE, MISCELLANEOUS, SKILL};
	Inventory(void);
	~Inventory(void);
	bool addItem(Skill* item);
	bool addItem(Miscellaneous* item);
	bool addItem(Consumable* item);
	bool addItem(Weapon* item);
	bool addItem(Armor* item);
	void addItem(int);
	bool findItem(Skill* item);
	bool findItem(Miscellaneous* item);
	bool findItem(Consumable* item);
	bool findItem(Weapon* item);
	bool findItem(Armor* item);
	bool removeItem(Skill* item);
	bool removeItem(Miscellaneous* item);
	bool removeItem(Consumable* item);
	bool removeItem(Weapon* item);
	bool removeItem(Armor* item);
	void removeItem(int);
	bool changeSize(type invType, int size);

private:
	std::vector<Skill*> inventorySkill;
	std::vector<Miscellaneous*> inventoryMiscellaneous;
	std::vector<Consumable*> inventoryConsumable;
	std::vector<Weapon*> inventoryWeapon;
	std::vector<Armor*> inventoryArmor;
	int gold;
	int invSkillSize;
	int invMiscellaneousSize;
	int invWeaponSize;
	int invArmorSize;
	int invConsumableSize;

};

