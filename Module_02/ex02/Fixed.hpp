#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {

private:

	int fixedPointValue;
	static const int numOfBits;

public:

	Fixed(const int value);
	Fixed(const float value);

	Fixed();
	Fixed(const Fixed&);

	Fixed& operator=(const Fixed&);
	bool operator!=(Fixed const &F);
	bool operator==(Fixed const &F);
	bool operator>(Fixed const &F);
	bool operator<(Fixed const &F);
	bool operator>=(Fixed const &F);
	bool operator<=(Fixed const &F);
	Fixed operator+(Fixed const &F2);
	Fixed operator-(Fixed const &F2);
	Fixed operator/(Fixed const &F2);
	Fixed operator*(Fixed const &F2);

	Fixed operator++();
	Fixed operator--();
	Fixed operator++(int);
	Fixed operator--(int);

	int getRawBits( void ) const;
	void setRawBits( int const);
	float toFloat( void ) const;
	int toInt( void ) const;

	static Fixed &min(Fixed&, Fixed&);
	static Fixed &max(Fixed&, Fixed&);
	static const Fixed &min(const Fixed&, const Fixed&);
	static const Fixed &max(const Fixed&, const Fixed&);

	~Fixed();
};

std::ostream& operator<<(std::ostream &out, const Fixed &fixed);
#endif
