#include "Gear.h"
#include <algorithm>

Gear::Gear()
{
	playerWeapon = NULL;
	inventory = new Inventory();
	strength = 0;
	dexterity = 0;
	damage = 0;
	intelligence = 0;
	vitality = 0;
	armor = 0;
	blockPercentage = 0;
}


Gear::~Gear(void)
{
	
}

void Gear::equipWeapon(Weapon* &weapon)
{
	if (inventory->findItem(weapon))
	{
		if (playerWeapon != NULL)
		{
			unequipWeapon();
		}

		inventory->removeItem(weapon);
		playerWeapon = weapon;
		damage += playerWeapon->returnAttribute(playerWeapon->DAMAGE);
		armor += playerWeapon->returnAttribute(playerWeapon->ARMOR);
		strength += playerWeapon->returnAttribute(playerWeapon->STRENGTH);
		dexterity += playerWeapon->returnAttribute(playerWeapon->DEXTERITY);
		intelligence += playerWeapon->returnAttribute(playerWeapon->INTELLIGENCE);
		vitality += playerWeapon->returnAttribute(playerWeapon->VITALITY);
	}
	
}

void Gear::unequipWeapon()
{
	damage -= playerWeapon->returnAttribute(playerWeapon->DAMAGE);
	armor -= playerWeapon->returnAttribute(playerWeapon->ARMOR);
	strength -= playerWeapon->returnAttribute(playerWeapon->STRENGTH);
	dexterity -= playerWeapon->returnAttribute(playerWeapon->DEXTERITY);
	intelligence -= playerWeapon->returnAttribute(playerWeapon->INTELLIGENCE);
	vitality -= playerWeapon->returnAttribute(playerWeapon->VITALITY);
	inventory->addItem(playerWeapon);
	playerWeapon = NULL;

}

void Gear::equipArmor(Armor* &Armor)
{
	bool found = false;
	int legAmount = 0;
	int handAmount = 0;

	for(int i = 0; i < (int)Armors.size() - 1; i++)
	{
		if (Armor->returnArmorType() == Armors[i]->returnArmorType())
		{
			switch (Armors[i]->returnArmorType())
			{
				case Armor->LEG:
					legAmount += 1;
					if (legAmount >= 2)
						found = true;
					break;
				case Armor->HAND:
					handAmount +=1;
					if (handAmount >= 2)
						found = true;
					break;
				default:
					found = true;
			}

			if (found = true)
				break;
		}
	}

	if (found == false)
	{
		if (inventory->findItem(Armor))
		{
			Armors.push_back(Armor);
			inventory->removeItem(Armor);

			blockPercentage += Armor->returnBlockPercentage();
			damage += Armor->returnAttribute(Armor->DAMAGE);
			armor += Armor->returnAttribute(Armor->ARMOR);
			strength += Armor->returnAttribute(Armor->STRENGTH);
			dexterity += Armor->returnAttribute(Armor->DEXTERITY);
			intelligence += Armor->returnAttribute(Armor->INTELLIGENCE);
			vitality += Armor->returnAttribute(Armor->VITALITY);
		}
	}
}

void Gear::unequipArmor(Armor* &armor)
{
	std::vector<Armor*>::iterator position = std::find(Armors.begin(), Armors.end(), armor);
	if (position != Armors.end())
	{
		Armors.erase(position);
		inventory->addItem(armor);

		blockPercentage -= armor->returnBlockPercentage();
		damage -= armor->returnAttribute(armor->DAMAGE);
		strength -= armor->returnAttribute(armor->STRENGTH);
		dexterity -= armor->returnAttribute(armor->DEXTERITY);
		intelligence -= armor->returnAttribute(armor->INTELLIGENCE);
		vitality -= armor->returnAttribute(armor->VITALITY);
	}
}

void Gear::equipSkill(Skill* &skill)
{
	if (inventory->findItem(skill))
	{
		if ((int)skills.size() >= 4)
		{
			skills.pop_back();
		}

		inventory->removeItem(skill);
		skills.push_back(skill);
	}
}

void Gear::unequipSkill(Skill* &skill)
{
	std::vector<Skill*>::iterator position = std::find(skills.begin(), skills.end(), skill);
	if (position != skills.end())
	{
		skills.erase(position);
		inventory->addItem(skill);
	}
}