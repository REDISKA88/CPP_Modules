#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap :public FragTrap, public ScavTrap {

private:
	std::string name;
public:
	DiamondTrap();
	DiamondTrap(std::string);
	DiamondTrap(DiamondTrap&);
	DiamondTrap& operator=(DiamondTrap&);

	void whoAmI();
	void attack(std::string const & target);
	void highFivesGuys();
	~DiamondTrap();
};

#endif
