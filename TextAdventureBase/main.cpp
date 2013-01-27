// TextG.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Mage.h"
#include "Armor.h"
#include "Inventory.h"
#include "Skill.h"
#include <iostream>
#include <vector>

int _tmain(int argc, _TCHAR* argv[])
{
	Mage* Mike = new Mage("MoBaT"); // Initializing the class using pointer
	Weapon* sword = new Weapon("Short Sword", 100, 10, 10, 10, 10, 0, 1000, sword->WEAPON);
	Weapon* sword2 = new Weapon("Short Sword2", 102, 10, 10, 10, 10, 0, 1000, sword->WEAPON);
	Armor* armor1 = new Armor("Soft Shield", 100, 100, 100, 100, 100, 1, 100, 10, 2.393848, armor1->SHIELD);
	Armor* armor2 = new Armor("Soft Left Leg", 100, 100, 100, 100, 100, 1, 100, 10, 2.393848, armor2->LEG);
	Armor* armor3 = new Armor("Soft Helmet", 100, 100, 100, 100, 100, 1, 100, 10, 2.393848, armor3->HELMET);
	Armor* armor4 = new Armor("Soft Right Leg", 100, 100, 100, 100, 100, 1, 100, 10, 2.393848, armor4->LEG);

	Mike->gear->inventory->addItem(sword);
	Mike->gear->inventory->addItem(sword2);
	Mike->gear->inventory->addItem(armor1);
	Mike->gear->inventory->addItem(armor2);
	Mike->gear->inventory->addItem(armor2);
	Mike->gear->inventory->addItem(armor2);
	Mike->gear->inventory->addItem(armor2);

	Mike->gear->equipWeapon(sword);
	Mike->gear->equipArmor(armor2);
	Mike->gear->equipArmor(armor2);
	Mike->gear->equipArmor(armor2);
	Mike->gear->equipArmor(armor2);
	
	Mage* enemy = new Mage("Boar", 1, 0, 1000, 1000, 10, 10, 10, 10, 10, 10);
	Skill* ski = new Skill("Raging Penis", "THRUST WITH POWER", ski->ICE, ski->FREEZE, 10, 2.0394);
	
	Mike->attack(enemy, ski);

	std::cin.get();
	return 0;
}