#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
	hitpoints = 100;
	energy = 50;
	attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	hitpoints = 100;
	energy = 50;
	attackDamage = 20;
	std::cout << "ScavTrap " << name << " was born" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap &copy) {
	*this = copy;
}
ScavTrap &ScavTrap::operator= (ScavTrap& S) {
	if (this != &S)
	{
		name = S.name;
		energy = S.energy;
		hitpoints = S.hitpoints;
		attackDamage = S.attackDamage;
	}
	return *this;
}

void ScavTrap::attack(const std::string &target) {
	std::cout << "ScavTrap " << "Attack " << target << ",causing " << attackDamage << " points of damage!"
	<< std::endl;
}

void ScavTrap::guardGate() {
	std::cout << "ScavTrap " << name << " have enterred in Gate keeper mode." << std::endl;
}

ScavTrap::~ScavTrap(){
	std::cout << "ScavTrap "<< name << " *Dies From Cringe*" << std::endl;
}
