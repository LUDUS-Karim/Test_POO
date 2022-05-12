#pragma once
#include "CPersonne.h"
#include "Header.h"
class CPersoQuete:public CPersonne
{
public:
	CPersoQuete(std::string name, CPersonne::CharacterClass characterClass, int hitPoints, int skillPoints, CPersonne::WeaponType weaponType, Transform transform);

	void attack();
	void takeDamage(int damage);
	void move();
};

