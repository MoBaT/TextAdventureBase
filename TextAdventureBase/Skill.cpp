#include "Skill.h"


Skill::Skill(std::string name, std::string Description, skillType skillType, skillAttributes Skillattributes, int Damage, double Attpercentage)
{
	skillName = name;
	description = Description;
	skilltype = skillType;
	skillattributes = Skillattributes;
	attPercentage = Attpercentage;
	damage = Damage;
}


Skill::~Skill(void)
{
}

Skill::skillType Skill::returnType() { return skilltype; }
Skill::skillAttributes Skill::returnAttribute() { return skillattributes; }
std::string Skill::returnName() { return skillName; }
std::string Skill::returnDescription(){ return description; }
int Skill::returnDamage() { return damage; }
double Skill::returnAttpercentage() { return attPercentage; }
