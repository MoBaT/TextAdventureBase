#include "Item.h"
#include <string>

Item::Item()
{
	itemT = MISC;
}


Item::~Item(void)
{

}

std::string Item::returnName()
{
	return itemName;
}

Item::itemType Item::returnItemType()
{
	return itemT;
}