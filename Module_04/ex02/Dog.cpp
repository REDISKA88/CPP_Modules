#include "Dog.hpp"
Dog::Dog(): Animal("Dog"){
	this->brain = new Brain();
	std::cout << "Dog was created" << std::endl;
}

Dog::Dog(const Dog&C){
	this->_type = C._type;
	this->brain = new Brain(*C.brain);
}

Dog &Dog::operator=(const Dog &C) {
	if (this != &C)
	{
		this->_type = C._type;
		*(this->brain) = *(C.brain);
	}
	return *this;
}

void Dog::makeSound() const {
	std::cout << "Dog make sound" << std::endl;
}

Dog::~Dog() {
	delete brain;
	std::cout << "Dog" << " *Dies From Cringe*" << std::endl;
}