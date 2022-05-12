#include "CPersonne.h"
#include "Header.h"
// GETTERS

std::string CPersonne::getName()
{
	return this->name;
}

CPersonne::CharacterClass CPersonne::getCharacterClass()
{
	return this->characterClass;
}

int CPersonne::getHitPoints()
{
	return this->hitPoints;
}

int CPersonne::getSkillPoints()
{
	return this->skillPoints;
}

CPersonne::WeaponType CPersonne::getWeaponType()
{
	return this->weaponType;
}

Transform CPersonne::getTransform()
{
	return this->transform;
}

// SETTERS

void CPersonne::setName(std::string name)
{
	this->name = name;
}

void CPersonne::setCharacterClass(CharacterClass characterClass)
{
	this->characterClass = characterClass;
}

void CPersonne::setHitPoints(int hitPoints)
{
	this->hitPoints = hitPoints;
}

void CPersonne::setSkillPoints(int skillPoints)
{
	this->skillPoints = skillPoints;
}

void CPersonne::setWeaponType(WeaponType weaponType)
{
	this->weaponType = weaponType;
}

void CPersonne::setTransform(Transform transform)
{
	this->transform = transform;
}
