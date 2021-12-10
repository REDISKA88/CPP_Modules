#include "DiamondTrap.hpp"
int main()
{
	DiamondTrap d("Ellis");
	d.attack("Francis");
	d.takeDamage(30);
	d.beRepaired(10);
	d.DiamondTrap::highFivesGuys();
	d.whoAmI();
	return (0);
}