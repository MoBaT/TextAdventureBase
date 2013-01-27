#include "Armor.h"

Armor::Armor(std::string name, int dmg, int str, int dex, int intel, int vit, int strike, int MAX_strike, int amr, double bp, armorType ArmorType) : Weapon(name, dmg, str, dex, intel, vit, strike, MAX_strike, GEAR)
{
	armorT = ArmorType;
	blockpercentage = bp;
	armor = amr;
}

Armor::~Armor(void)
{
}

Armor::armorType Armor::returnArmorType()
{
	return armorT;
}

double Armor::returnBlockPercentage()
{
	return blockpercentage;
}