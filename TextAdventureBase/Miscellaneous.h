#pragma once
#include "Item.h"

class Miscellaneous : public Item
{
public:
	enum type {ITEM, KEY};
	Miscellaneous(std::string name, type Type);
	~Miscellaneous(void);
	

private:
	type miscType;
};

