#include "span.hpp"
int main(){
	span s = span(10000);
	try {
		for (int i = 0; i < 100; i++)
			s.addNumber(10 + i);
		for(int i = 100; i < 500; i++)
			s.addNumber(2 + i);
	}
	catch(std::exception &e){
		std::cout << e.what() <<std::endl;
	}
	try {
		std::cout << "Shortest span: " <<s.shortestSpan() << std::endl;
		std::cout << "longest span: " <<s.longestSpan() << std::endl;
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
	return 0;
}