#pragma once
#include <string>
#include <vector>

class Skill
{
public:
	enum skillType {FIRE, WATER, ICE, WIND, ACID};
	enum skillAttributes {FREEZE, BURN, SLOW};

	Skill(std::string name, std::string Description, skillType skillType, skillAttributes Skillattributes, int Damage, double Attpercentage);
	~Skill(void);

	skillType returnType();
	skillAttributes returnAttribute();
	std::string returnName();
	std::string returnDescription();
	int returnDamage();
	double returnAttpercentage();

private:
	std::string skillName;
	std::string description;
	skillType skilltype;
	skillAttributes skillattributes;
	int damage;
	double attPercentage;
};

