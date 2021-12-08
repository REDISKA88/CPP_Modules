#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
class Fixed {

private:

	int fixedPointValue;
	static const int numOfBits;

public:
	Fixed();
	Fixed(const Fixed&);
	Fixed& operator=(const Fixed&);

	int getRawBits( void ) const;
	void setRawBits( int const);

	~Fixed();
};

#endif
