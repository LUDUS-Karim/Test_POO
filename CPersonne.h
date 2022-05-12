#pragma once
#include "Transform.h"
#include "Header.h"

class CPersonne
{
public:

	// Classe de personnage (Example de type de classe provenant de Cyberpunk 2077)
	enum class CharacterClass { TECHIE, SOLO, NETRUNNER };
	// Type d'arme (ARME_BLANCHE, ARME_DE_POING, ARME_D_EPAULE)
	enum class WeaponType { KNIFE, HAND_GUN, LONG_GUN };

private:

	std::string name;
	CharacterClass characterClass;
	int hitPoints = 0;
	int skillPoints = 0;
	WeaponType weaponType;
	Transform transform;

public:

	// Getters
	std::string getName();
	CharacterClass getCharacterClass();
	int getHitPoints();
	int getSkillPoints();
	WeaponType getWeaponType();
	Transform getTransform();

	// Setters
	void setName(std::string name);
	void setCharacterClass(CharacterClass characterClass);
	void setHitPoints(int hitPoints);
	void setSkillPoints(int skillPoints);
	void setWeaponType(WeaponType weaponType);
	void setTransform(Transform transform);

	// Actions
	virtual void attack() = 0;
	virtual void takeDamage(int damage) = 0;
	virtual void move() = 0;
};