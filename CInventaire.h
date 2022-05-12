#pragma once
#include "Header.h"
#include "CObjet.h"

class CInventaire
{
private:
	const CObjet objects[10];

public:
	void addItem(Item item);
	void removeItemAtSlotIndex(int slot);
	void displayInventory();
};

