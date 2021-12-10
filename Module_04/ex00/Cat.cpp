#include "Cat.hpp"
Cat::Cat() {
	setType("Cat");
	std::cout << "Cat was created" << std::endl;
}

Cat::Cat(const Cat&C){
	*this = C;
}

Cat &Cat::operator=(const Cat &C) {
	if (this != &C)
		this->type = C.type;
	return *this;
}

void Cat::makeSound() const {
	std::cout << "Cat make sound" << std::endl;
}

Cat::~Cat() {
	std::cout << "Cat" << " *Dies From Cringe*" << std::endl;
}