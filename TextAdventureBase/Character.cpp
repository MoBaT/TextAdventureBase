#include "Character.h"
#include <iostream>
#include <string>

Character::Character(std::string Name, int Level, int Experience, int Health, int MAX_Health, int Armor, int Strength, int Dexterity, int Intelligence, int Vitality)
{
	gear = new Gear();
	playerName = Name;
	level = Level;
	experience = Experience;
	health = Health;
	MAX_health = MAX_Health;
	armor = Armor;
	strength = Strength;
	dexterity = Dexterity;
	intelligence = Intelligence;
	vitality = Vitality;
}

Character::Character()
{
	gear = new Gear();
	level = 1;
	MAX_health = 100;
	health = 100;
	experience = 0;
	armor = 1;
	strength = 1;
	dexterity = 1;
	intelligence = 1;
	vitality = 1;
}


Character::~Character(void)
{

}


std::string Character::returnName()
{
	return playerName;
}

int Character::returnAttribute(attributes Attribute)
{
	switch (Attribute)
	{
		case LEVEL:
			return level;
			break;
		case EXPERIENCE:
			return experience;
			break;
		case HEALTH:
			return health;
			break;
		case MAX_HEALTH:
			return MAX_health;
			break;
		case ARMOR:
			return armor;
			break;
		case STRENGTH:
			return strength;
			break;
		case DEXTERITY:
			return dexterity;
			break;
		case INTELLIGENCE:
			return intelligence;
			break;
		case VITALITY:
			return vitality;
			break;
	}
	return 0;
}

int Character::addAttribute(attributes Attribute, int amount)
{
	switch (Attribute)
	{
		case LEVEL:
			level += amount;
			break;
		case EXPERIENCE:
			experience += amount;
			break;
		case HEALTH:
			health += amount;
			break;
		case MAX_HEALTH:
			health += amount;
			MAX_health += amount;
			break;
		case ARMOR:
			armor += amount;
			break;
		case STRENGTH:
			strength += amount;
			break;
		case DEXTERITY:
			dexterity += amount;
			break;
		case INTELLIGENCE:
			intelligence += amount;
			break;
		case VITALITY:
			vitality += amount;
			break;
	}
	return 0;
}

void Character::ConsumeItem(Consumable* &item)
{
	int itemHealthAmount = item->returnType(item->HEALTH);

	if ((health + itemHealthAmount) > MAX_health)
		health = MAX_health;
	else
		health += itemHealthAmount;
}

void Character::attack(Character* enemy)
{
	enemy->addAttribute(HEALTH, -10);
}

void Character::attack(Character* enemy, Skill* skill)
{
	enemy->addAttribute(HEALTH, -(skill->returnDamage()));
}