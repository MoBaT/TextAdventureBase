#pragma once
#include "Consumable.h"
#include <string>
#include "Gear.h"
#include "Skill.h"

class Character
{
public:
	enum attributes {LEVEL, EXPERIENCE, HEALTH, MAX_HEALTH, ARMOR, STRENGTH, DEXTERITY, INTELLIGENCE, VITALITY};
	Character();
	Character(std::string name, int Level, int Experience, int Health, int MAX_Health, int Armor, int Strength, int Dexterity, int Intelligence, int Vitality);
	std::string returnName();
	int returnAttribute(attributes Attribute);
	int addAttribute(attributes Attribute, int amount);
	void ConsumeItem(Consumable* &item);
	void attack(Character* enemy);
	void attack(Character* enemy, Skill* skill);
	~Character(void);
	Gear* gear;

private:


protected:
	std::string playerName;
	int level;
	int experience;
	int health;
	int MAX_health;
	int armor;
	int strength;
	int dexterity;
	int intelligence;
	int vitality;
};