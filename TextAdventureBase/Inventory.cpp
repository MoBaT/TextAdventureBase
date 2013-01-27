#include <algorithm>
#include <iostream>
#include "Inventory.h"
#include "Item.h"


Inventory::Inventory(void)
{
	gold = 10;
	invSkillSize = 10;
	invMiscellaneousSize = 10;
	invConsumableSize = 10;
	invWeaponSize = 10;
	invArmorSize = 10;
}

Inventory::~Inventory(void)
{

}

void Inventory::addItem(int G)
{
	gold += G;
}

bool Inventory::addItem(Miscellaneous* item)
{
	if ((int)inventoryMiscellaneous.size() < invMiscellaneousSize) {
		inventoryMiscellaneous.push_back(item);
		return true;
	} else
		return false;
}

bool Inventory::addItem(Consumable* item)
{
	if ((int)inventoryConsumable.size() < invConsumableSize) {
		inventoryConsumable.push_back(item);
		return true;
	} else
		return false;
}

bool Inventory::addItem(Weapon* item)
{
	if ((int)inventoryWeapon.size() < invWeaponSize) {
		inventoryWeapon.push_back(item);
		return true;
	} else
		return false;
}

bool Inventory::addItem(Armor* item)
{
	if ((int)inventoryArmor.size() < invArmorSize) {
		inventoryArmor.push_back(item);
		return true;
	} else
		return false;
}

bool Inventory::addItem(Skill* item)
{
	if ((int)inventorySkill.size() < invSkillSize) {
		inventorySkill.push_back(item);
		return true;
	} else
		return false;
}

bool Inventory::findItem(Miscellaneous* item)
{
	if(std::binary_search(inventoryMiscellaneous.begin(), inventoryMiscellaneous.end(), item))
		return true;
	return false;
}

bool Inventory::findItem(Consumable* item)
{
	if(std::binary_search(inventoryConsumable.begin(), inventoryConsumable.end(), item))
		return true;
	return false;
}

bool Inventory::findItem(Weapon* item)
{
	if(std::binary_search(inventoryWeapon.begin(), inventoryWeapon.end(), item))
		return true;
	return false;
}

bool Inventory::findItem(Armor* item)
{
	if(std::binary_search(inventoryArmor.begin(), inventoryArmor.end(), item))
		return true;
	return false;

	/*std::vector<Armor*>::iterator position = std::find(inventoryArmor.begin(), inventoryArmor.end(), item);
	if (position != inventoryArmor.end())
	{
		return true;
	}
	return false;*/
}

bool Inventory::findItem(Skill* item)
{
	if(std::binary_search(inventorySkill.begin(), inventorySkill.end(), item))
		return true;
	return false;
}

bool Inventory::removeItem(Miscellaneous* item)
{
	std::vector<Miscellaneous*>::iterator position = std::find(inventoryMiscellaneous.begin(), inventoryMiscellaneous.end(), item);
	if (position != inventoryMiscellaneous.end())
	{
		inventoryMiscellaneous.erase(position);
		return true;
	}
	return false;
}

void Inventory::removeItem(int G)
{
	gold -= G;
}

bool Inventory::removeItem(Consumable* item)
{
	std::vector<Consumable*>::iterator position = std::find(inventoryConsumable.begin(), inventoryConsumable.end(), item);
	if (position != inventoryConsumable.end())
	{
		inventoryConsumable.erase(position);
		return true;
	}
	return false;
}

bool Inventory::removeItem(Armor* item)
{
	std::vector<Armor*>::iterator position = std::find(inventoryArmor.begin(), inventoryArmor.end(), item);
	if (position != inventoryArmor.end())
	{
		inventoryArmor.erase(position);
		return true;
	}
	return false;
}

bool Inventory::removeItem(Weapon* item)
{
	std::vector<Weapon*>::iterator position = std::find(inventoryWeapon.begin(), inventoryWeapon.end(), item);
	if (position != inventoryWeapon.end())
	{
		inventoryWeapon.erase(position);
		return true;
	}
	return false;
}

bool Inventory::removeItem(Skill* item)
{
	std::vector<Skill*>::iterator position = std::find(inventorySkill.begin(), inventorySkill.end(), item);
	if (position != inventorySkill.end())
	{
		inventorySkill.erase(position);
		return true;
	}
	return false;
}

bool Inventory::changeSize(type invType, int size)
{
	switch (invType)
	{
		case SKILL:
			if ((int)inventorySkill.size() <= size) {
				invSkillSize = size;
				return true;
			} else
				return false;
			break;
		case ARMOR:
			if ((int)inventoryArmor.size() <= size) {
				invArmorSize = size;
				return true;
			} else
				return false;
			break;
		case WEAPON:
			if ((int)inventoryWeapon.size() <= size) {
				invWeaponSize = size;
				return true;
			} else
				return false;
			break;
		case CONSUMABLE:
			if ((int)inventoryConsumable.size() <= size) {
				invConsumableSize = size;
				return true;
			} else
				return false;
			break;
		case MISCELLANEOUS:
			if ((int)inventoryMiscellaneous.size() <= size) {
				invMiscellaneousSize = size;
				return true;
			} else
				return false;
			break;
	}
	return false;
}