#include "DiamondTrap.hpp"
int main()
{

	DiamondTrap diamond = DiamondTrap("Diamond");
	diamond.attack("aaa");
	diamond.takeDamage(30);
	diamond.beRepaired(10);
	diamond.guardGate();
	diamond.highFiveGuys();
	diamond.whoAmI();
	return (0);
}