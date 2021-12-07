#include "humanB.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
	this->weapon = NULL;
}
void HumanB::setWeapon(Weapon &weapon) {
	this->weapon = &weapon;
}
void HumanB::attack() {
	if (weapon)
		std::cout << name << "attacks with his " << weapon->getType() << std::endl;
	else
		std::cout << name << "cannot attack without weapons" << std::endl;

}