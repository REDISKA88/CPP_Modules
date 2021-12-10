#include "FragTrap.hpp"

int    main()
{

	ClapTrap    clap("Zoey");
	FragTrap    frag("Bill");

	clap.attack("Ellis");
	clap.takeDamage(10);
	clap.beRepaired(10);
	frag.attack("Ellis");
	frag.takeDamage(10);
	frag.beRepaired(10);
	frag.highFivesGuys();
	frag.highFivesGuys();

	return (0);
}