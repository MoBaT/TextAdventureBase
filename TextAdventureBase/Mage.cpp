#include "Mage.h"

Mage::Mage(std::string Name, int Level, int Experience, int Health, int MAX_Health, int Armor, int Strength, int Dexterity, int Intelligence, int Vitality, int Mana) : Character(Name, Level, Experience, Health, MAX_Health, Armor, Strength, Dexterity, Intelligence, Vitality)
{
	mana = Mana;
}

Mage::Mage(std::string name) : Character(name, 1, 0, 100, 100, 1, 1, 1, 3, 2)
{
	mana = 100;
}

Mage::~Mage(void)
{
}
