#include "Fixed.hpp"
Fixed::fixedPointValue = 8;

Fixed::Fixed(){
	fixedPointValue = 0;
	std::cout << "Default constructor called" << std::endl;
}

int Fixed::getRawBits() const {
	std::cout << "getRawBits member function called" << std::endl;

	return Fixed::fixedPointValue;
}


void Fixed::setRawBits(const int raw) {
	fixedPointValue = raw;
}

Fixed &Fixed::operator=(const Fixed & other) {
	this->setRawBits(other.getRawBits());
	return *this;
}

Fixed::Fixed(const Fixed& other): fixedPointValue(other.getRawBits()){
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}