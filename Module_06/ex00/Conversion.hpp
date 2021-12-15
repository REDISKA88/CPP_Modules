#ifndef CONVERSION_HPP
#define CONVERSION_HPP

# include <iostream>
#include <string>
# include <cmath>
# include <cctype>
# include <cfloat>
class Conversion {

public:
	int  int_var;
	char char_var;
	float float_var;
	double double_var;

	Conversion();
	Conversion(std::string);
	Conversion(const Conversion&);
	Conversion& operator=(const Conversion&);

	bool char_type(std::string);
	bool int_type(std::string);
	bool float_type(std::string);
	bool double_type(std::string);
	bool print_char(char);
	bool print_int(int);
	bool print_float(float);
	bool print_double(double);

	~Conversion();

};

#endif
