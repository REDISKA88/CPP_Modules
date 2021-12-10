#include "Animal.hpp"

Animal::Animal() {
	setType("");
	std::cout << "The animal was created" << std::endl;
}

Animal::Animal(const Animal&A){
	*this = A;
}

Animal &Animal::operator=(const Animal &A) {
	if (this != &A)
		this->type = A.type;
	return *this;
}

void Animal::setType(const std::string type) {
	this->type = type;
}

std::string Animal::getType() const {
	return this->type;
}

void Animal::makeSound() const {
	std::cout << "Some animal makes some sound" << std::endl;
}

Animal::~Animal(){
	std::cout << "Animal" << " *Dies From Cringe*" << std::endl;
}