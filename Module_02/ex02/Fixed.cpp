#include "Fixed.hpp"
const int Fixed::numOfBits = 8;

Fixed::Fixed(const int value){
	this->fixedPointValue = value << numOfBits;
}

Fixed::Fixed(const float value){
int newVal = roundf(value * (1 << numOfBits));
this->setRawBits(newVal);
}

Fixed &Fixed::min(Fixed &F1, Fixed &F2) {
	if (F1 >= F2)
		return (F2);
	return (F1);
}

Fixed & Fixed::max(Fixed &F1, Fixed &F2) {
	if (F1 <= F2)
		return (F2);
	return (F1);
}

const Fixed & Fixed::min(const Fixed &F1, const Fixed &F2) {
	if ((Fixed&)F1 >= (Fixed&)F2)
		return (F2);
	return (F1);
}

const Fixed & Fixed::max(const Fixed &F1, const Fixed &F2) {
	if ((Fixed&)F1 <= (Fixed&)F2)
		return (F2);
	return (F1);
}
float Fixed::toFloat() const {
	return ((float)fixedPointValue / (1 << numOfBits));
}

int Fixed::toInt() const {
	return (fixedPointValue >> numOfBits);
}

bool Fixed::operator!=(const Fixed &F) {
	return (fixedPointValue != F.fixedPointValue);
}

bool Fixed::operator==(const Fixed &F) {
	return (fixedPointValue == F.fixedPointValue);
}

bool Fixed::operator>(const Fixed &F) {
	return(fixedPointValue > F.fixedPointValue);
}

bool Fixed::operator<(const Fixed &F) {
	return (fixedPointValue < F.fixedPointValue);
}

bool Fixed::operator>=(const Fixed &F) {
	return (fixedPointValue >= F.fixedPointValue);
}
bool Fixed::operator<=(const Fixed &F) {
	return(fixedPointValue <= F.fixedPointValue);
}
Fixed Fixed::operator+(const Fixed &F2) {
	Fixed Plus;
	Plus.fixedPointValue = this->fixedPointValue + F2.getRawBits();
	return (Plus);
}
Fixed Fixed::operator-(const Fixed &F2) {
	Fixed Minus;
	Minus.fixedPointValue = (this->fixedPointValue - F2.getRawBits());
	return (Minus);
}

Fixed Fixed::operator/(const Fixed &F2) {
	Fixed Divide;
	Divide.fixedPointValue = ((this->fixedPointValue * (1 << Fixed::numOfBits)) / F2.getRawBits());
	return (Divide);
}

Fixed Fixed::operator*(const Fixed &F2) {
	Fixed Multiply;
	Multiply.fixedPointValue = (this->fixedPointValue * (F2.getRawBits() / (1 << Fixed::numOfBits)));
	return (Multiply);
}

Fixed Fixed::operator++(){
	fixedPointValue++;
	return (*this);
}

Fixed Fixed::operator--(){
	--fixedPointValue;
	return (*this);
}

Fixed Fixed::operator++(int){
	Fixed F;
	F.fixedPointValue = fixedPointValue;
	++fixedPointValue;
	return (F);
}

Fixed Fixed::operator--(int){
	Fixed F;
	F.fixedPointValue = fixedPointValue;
	--fixedPointValue;
	return (F);
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