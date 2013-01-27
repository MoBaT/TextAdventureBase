#pragma once
#include "Character.h"

class Mage : public Character
{
public:
	Mage(std::string Name, int Level, int Experience, int Health, int MAX_Health, int Armor, int Strength, int Dexterity, int Intelligence, int Vitality, int Mana);
	Mage(std::string Name);
	~Mage(void);
private:
	int mana;
};

