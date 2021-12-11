#include "FragTrap.hpp"

FragTrap::FragTrap(){
	hitpoints = 100;
	energy = 100;
	attackDamage = 30;
}

FragTrap::FragTrap(std::string name): ClapTrap(name) {
	hitpoints = 100;
	energy = 100;
	attackDamage = 30;
	std::cout << "FragTrap " << name << " was born" << std::endl;
}

FragTrap::FragTrap(FragTrap &copy) {
	*this = copy;
}

FragTrap &FragTrap::operator=(FragTrap &F) {
	if (this != &F)
	{
		name = F.name;
		energy = F.energy;
		hitpoints = F.hitpoints;
		attackDamage = F.attackDamage;
	}
	return *this;
}

void FragTrap::highFivesGuys() {
	std::cout << "high ﬁves!" <<std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap " <<  " *Dies From Cringe*" << std::endl;
}