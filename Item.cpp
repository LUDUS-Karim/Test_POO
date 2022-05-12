#include "Item.h"
#include "Header.h"

Item::Item(std::string name, int slot, int quantity)
{
	this->name = name;
	this->slot = slot;
	this->quantity = quantity;
}
