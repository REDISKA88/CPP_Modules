#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {

private:

	int fixedPointValue;
	static const int numOfBits;

public:

	//new constructors:
	Fixed(const int value);
	Fixed(const float value);
	//

	Fixed();
	Fixed(const Fixed&);
	Fixed& operator=(const Fixed&);
	int getRawBits( void ) const;
	void setRawBits( int const);

	//new member functions:
	float toFloat( void ) const;
	int toInt( void ) const;
	//

	~Fixed();
};

std::ostream& operator<<(std::ostream &out, const Fixed &fixed);
#endif
