#include "span.hpp"
span::span(unsigned int size){
	n = size;
}

void span::addNumber(int i) {
		if (int_vector.size() >= n)
			throw std::logic_error("Out of max size of container");
		int_vector.push_back(i);
}
int span::longestSpan() const {
	int  max = *std::max_element(int_vector.begin(), int_vector.end());
	int min = *std::min_element(int_vector.begin(), int_vector.end());
	return max - min;
}

int span::shortestSpan() const {
	std::vector<int> temp_vector = int_vector;
	sort(temp_vector.begin(), temp_vector.end());
	return (temp_vector[1] - temp_vector[0]);
}
span::~span(){

}