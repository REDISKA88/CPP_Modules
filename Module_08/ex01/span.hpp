#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <iostream>
#include <exception>

class span {

private:
	unsigned int n;
	int size;
	std::vector<int> int_vector;
public:
	span(unsigned int n);
	void addNumber(int i);
	int shortestSpan() const;
	int longestSpan() const;
	~span();
};


#endif
