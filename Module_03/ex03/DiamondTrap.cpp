#include "DiamondTrap.hpp"
DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name){
	DiamondTrap::name = name;
	this->hitpoints = 100;
	this->energy = 100;
	this->attackDamage = 30;
	std::cout << "DiamondTrap " << name << " was born" << std::endl;
}
DiamondTrap::DiamondTrap(DiamondTrap &copy) {
	*this = copy;
}

void DiamondTrap::whoAmI() {
	std::cout << "I am DiamondTrap " << DiamondTrap::name  << " And ClapTrap " << ClapTrap::getName() << std::endl;
}
DiamondTrap &DiamondTrap::operator=(DiamondTrap &D) {
	if (this != &D)
	{
		DiamondTrap::name = D.name;
		this->energy = D.energy;
		this->attackDamage = D.attackDamage;
		this->hitpoints = D.hitpoints;
	}
	return *this;
}

void DiamondTrap::highFivesGuys() {
	std::cout << "DiamondTrap say highFivesGuys" << std::endl;
}

void DiamondTrap::attack(const std::string &target) {
	FragTrap::attack(target);
}
DiamondTrap::~DiamondTrap(){
	std::cout << "DiamondTrap "<<" *Dies From Cringe*" << std::endl;
}