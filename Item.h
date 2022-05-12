#pragma once
#include "Header.h"
class Item
{
private:
	std::string name;
	int slot;
	int quantity;
public:
	Item(std::string name, int slot, int quantity);
};

