#include "CHero.h"
#include "Header.h"

CHero::CHero(std::string name, CharacterClass characterClass, int hitPoints, int skillPoints, WeaponType weaponType, Transform transform)
{
	setName(name);
	setCharacterClass(characterClass);
	setHitPoints(hitPoints);
	setSkillPoints(skillPoints);
	setWeaponType(weaponType);
	setTransform(transform);
}

void CHero::attack()
{
	std::cout << "Attaque ..." << std::endl;
}

void CHero::takeDamage(int damage)
{
	std::cout << "Dégats ..." << std::endl;
}

void CHero::move()
{
	std::cout << "Déplacement ..." << std::endl;
}