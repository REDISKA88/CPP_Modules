#include "ScavTrap.hpp"

#include "ScavTrap.hpp"

int    main()
{
	ClapTrap    clap("Zoey");
	ScavTrap    trap("Francis");
	ScavTrap    scav2(trap);


	ScavTrap    scav;

	scav = trap;
	scav.attack("Louis");
	scav.takeDamage(10);
	scav.guardGate();

	scav2.takeDamage(10);
	scav2.beRepaired(10);
	scav2.guardGate();

	clap.attack("Ellis");
	clap.takeDamage(10);
	clap.beRepaired(10);

	trap.attack("petit");
	trap.takeDamage(10);
	trap.beRepaired(10);
	trap.guardGate();

	return (0);
}