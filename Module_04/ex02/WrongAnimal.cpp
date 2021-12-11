#include "WrongAnimal.hpp"
WrongAnimal::WrongAnimal(){
	setType("WrongAnimal");
	std::cout << getType() << " was created" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &W) {
	*this = W;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &W) {
	if (this != &W)
		this->type = W.type;
	return *this;
}

std::string WrongAnimal::getType() const {
	return type;
}

void WrongAnimal::setType(std::string type) {
	this->type = type;
}

void WrongAnimal::makeSound() const {
	std::cout << "wrong animal make Sound" << std::endl;
}

WrongAnimal::~WrongAnimal(){
	std::cout << "Wrong Animal *Dies From Cringe*" << std::endl;
}