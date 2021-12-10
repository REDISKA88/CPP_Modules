#include "ClapTrap.hpp"
ClapTrap::ClapTrap():hitpoints(10), energy(10), attackDamage(0)
{
	std::cout << "CalpTrap created!" << std::endl;
}

ClapTrap::ClapTrap(std::string name){
	this->name = name;
	this->hitpoints = 10;
	this->energy = 10;
	this->attackDamage = 0;

	std::cout << "ClapTrap " << name << " was born" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy) {
	*this = copy;
}

std::string ClapTrap::getName() {
	return (this->name);
}

int ClapTrap::getEnegry() {
	return (this->energy);
}
int ClapTrap::getHitpoints() {
	return (this->hitpoints);
}

int ClapTrap::getAttackDamage() {
	return (this->attackDamage);
}
ClapTrap & ClapTrap::operator=(const ClapTrap &C) {
	this->name = C.name;
	this->hitpoints = C.hitpoints;
	this->energy = C.energy;
	this->attackDamage = C.attackDamage;
	return (*this);
}

void ClapTrap::attack(const std::string &target) {
	std::cout << "ClapTrap " <<name << " attack " << target << ", causing" <<  attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	std::cout << "ClapTrap " << name << " get damage " << amount << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	std::cout << "ClapTrap " << name << " repaired by " << amount << " energy!" << std::endl;
}
ClapTrap::~ClapTrap(){
	std::cout << name << " *Dies From Cringe*" << std::endl;
}
