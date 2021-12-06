#include "Zombie.hpp"

int main(){

	Zombie zombie1("Francis");
	Zombie *zombie2 = newZombie("Zoey");
	Zombie *zombie3 = newZombie("Louis");


	zombie2->announce();
	delete zombie2;
	zombie3->announce();
	delete zombie3;
	randomChump("Bill");

	return (0);
}
