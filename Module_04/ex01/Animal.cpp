#include "Animal.hpp"

Animal::Animal() {
	std::cout << "The animal was created" << std::endl;
}

Animal::Animal(std::string type):  _type(type) {
	std::cout << "The animal was created" << std::endl;}

Animal::Animal(const Animal&A){
	*this = A;
}

Animal &Animal::operator=(const Animal &A) {
	if (this != &A)
		this->_type = A._type;
	return *this;
}

void Animal::setType(const std::string type) {
	this->_type = type;
}

std::string Animal::getType() const {
	return this->_type;
}

void Animal::makeSound() const {
	std::cout << "Some animal makes some sound" << std::endl;
}

Animal::~Animal(){
	std::cout << "Animal" << " *Dies From Cringe*" << std::endl;
}