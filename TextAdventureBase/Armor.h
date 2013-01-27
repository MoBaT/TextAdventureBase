#pragma once
#include "Weapon.h"

class Armor : public Weapon
{
public:
	enum armorType {HELMET, CHEST, SHIELD, HAND, LEG, AMULET}; 
	Armor(std::string name, int dmg, int str, int dex, int intel, int vit, int strike, int MAX_strike, int amr, double bp, armorType ArmorType = CHEST);
	~Armor(void);
	armorType returnArmorType();
	double returnBlockPercentage();

private:
	armorType armorT;
	double blockpercentage;
};

