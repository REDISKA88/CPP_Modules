#include "Dog.hpp"
Dog::Dog() {
	setType("Dog");
	std::cout << "Dog was created" << std::endl;
}

Dog::Dog(const Dog&C){
	*this = C;
}

Dog &Dog::operator=(const Dog &C) {
	if (this != &C)
		this->type = C.type;
	return *this;
}

void Dog::makeSound() const {
	std::cout << "Dog make sound" << std::endl;
}

Dog::~Dog() {
	std::cout << "Dog" << " *Dies From Cringe*" << std::endl;
}