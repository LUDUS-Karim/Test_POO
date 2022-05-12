#pragma once
#include "CPersonne.h"
#include "Header.h"
class CHero:public CPersonne
{
public:
	CHero(std::string name, CharacterClass characterClass, int hitPoints, int skillPoints, WeaponType weaponType, Transform transform);
	
	void attack();
	void takeDamage(int damage);
	void move();

};

