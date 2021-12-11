#include "ClapTrap.hpp"

int main(){
	ClapTrap One("Coach");
	ClapTrap Two("Francis");

	One.attack(Two.getName());
	Two.takeDamage(10);
}