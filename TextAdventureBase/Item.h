#pragma once

#include <string>

class Item
{
public:
	enum itemType { WEAPON, GEAR, CONSUMABLE, MISC };

	Item();
	~Item(void);

	std::string returnName();
	itemType returnItemType();

protected:
	itemType itemT;
	std::string itemName;


};

