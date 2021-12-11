#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>

class ClapTrap {

protected:
	std::string name;
	int hitpoints;
	int energy;
	int attackDamage;
public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(ClapTrap const&);

	ClapTrap& operator=(ClapTrap const&);
	void attack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	std::string  getName();
	int getEnegry();
	int getHitpoints();
	int getAttackDamage();
	virtual ~ClapTrap();

};


#endif
