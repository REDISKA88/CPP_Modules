#include "Fixed.hpp"
const int Fixed::numOfBits = 8;

Fixed::Fixed(const int value){
	this->fixedPointValue = value << numOfBits;
}

Fixed::Fixed(const float value){
int newVal = roundf(value * (1 << numOfBits));
this->setRawBits(newVal);
}

float Fixed::toFloat() const {
	return ((float)fixedPointValue / (1 << numOfBits));
}

int Fixed::toInt() const {
	return (fixedPointValue >> numOfBits);
}

std::ostream& operator<<(std::ostream &out, const Fixed &fixed) {
	out << fixed.toFloat();
	return (out);
}

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
	std::cout << "Assignation operator called" << std::endl;
	return *this;
}

Fixed::Fixed(const Fixed& other): fixedPointValue(other.getRawBits()){
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}