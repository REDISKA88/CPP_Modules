#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{

	public:
		ScavTrap();
		ScavTrap(std::string);
		ScavTrap(ScavTrap&);

		void guardGate();
		void attack(std::string const& target);
		ScavTrap &operator= (ScavTrap&);
		~ScavTrap();
};


#endif
