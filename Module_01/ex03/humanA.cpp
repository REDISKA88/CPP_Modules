#include "humanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): _weapon(weapon) {
	this->name = name;
	this->_weapon = weapon;
}

void HumanA::attack() {
	std::cout << "attacks with his " << _weapon.getType() << std::endl;
}
