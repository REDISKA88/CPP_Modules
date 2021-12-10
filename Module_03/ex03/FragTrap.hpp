#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"
class FragTrap : public virtual ClapTrap {

	public :
		FragTrap();
		FragTrap(std::string);
		FragTrap(FragTrap&);

		FragTrap& operator=(FragTrap&);
		void highFivesGuys(void);
		~FragTrap();
};


#endif
