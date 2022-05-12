#include "Header.h"
#include "CHero.h"


using namespace std;

int main()
{
    CHero hero1 = CHero("Jack", CHero::CharacterClass::NETRUNNER, 100, 5, CHero::WeaponType::KNIFE, Transform());
    cout << hero1.getTransform().position.x << endl;
    hero1.setHitPoints(500);
    cout << hero1.getHitPoints() << endl;


    system("pause");

}
