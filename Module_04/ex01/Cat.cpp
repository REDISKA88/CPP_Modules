#include "Cat.hpp"
Cat::Cat() : Animal("Cat")){
	this->brain = new Brain();
	std::cout << "Cat was created" << std::endl;
}

Cat::Cat(const Cat&C){
	this->_type = C._type;
	this->brain = new Brain(*C.brain);
}

Cat &Cat::operator=(const Cat &C) {
	if (this != &C)
	{
		this->_type = C._type;
		this->brain = new Brain(*C.brain);
	}

	return *this;
}

void Cat::makeSound() const {
	std::cout << "Cat make sound" << std::endl;
}

Cat::~Cat() {
	delete brain;
	std::cout << "Cat" << " *Dies From Cringe*" << std::endl;
}