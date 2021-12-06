#include "Zombie.hpp"
Zombie::Zombie() {}

Zombie::Zombie(std::string name){
	this->_name = name;
}

void Zombie::announce(){
	std::cout << _name  << " " << "BraiiiiiiinnnzzzZ...";
	std::cout << std::endl;
}

void Zombie::setName(std::string name){
	this->_name = name;
}

Zombie::~Zombie(){
	std::cout << _name << " " << "*Dies From Cringe*" << std::endl;
}


