#include "CPersoQuete.h"
#include "Header.h"

CPersoQuete::CPersoQuete(std::string name, CharacterClass characterClass, int hitPoints, int skillPoints, WeaponType weaponType, Transform transform)
{
	setName(name);
	setCharacterClass(characterClass);
	setHitPoints(hitPoints);
	setSkillPoints(skillPoints);
	setWeaponType(weaponType);
	setTransform(transform);
}

void CPersoQuete::attack()
{
	std::cout << "Attaque ..." << std::endl;
}

void CPersoQuete::takeDamage(int damage)
{
	std::cout << "Dégats ..." << std::endl;
}

void CPersoQuete::move()
{
	std::cout << "Déplacement ..." << std::endl;
}