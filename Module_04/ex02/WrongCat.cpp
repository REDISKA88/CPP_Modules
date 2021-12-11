#include "WrongCat.hpp"
WrongCat::WrongCat(){
	setType("Wrong Cat");
	std::cout <<"Cat was created" << std::endl;
}
WrongCat::WrongCat(const WrongCat &C) {
	*this = C;
}

WrongCat &WrongCat::operator=(const WrongCat &C) {
	if (this != &C)
		this->type = C.type;
	return *this;
}

void WrongCat::makeSound() const {
	std::cout << "WrongCat make sound" << std::endl;
}
WrongCat::~WrongCat(){
	std::cout << "WrongCat *Dies From Cringe*" << std::endl;
}