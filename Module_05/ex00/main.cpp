#include "Bureaucrat.hpp"
int main(){
	try
	{
		Bureaucrat b(150, "Chun-Li");
		std::cout << b << std::endl;
		b.decrementGrade();
		std::cout << b << std::endl;
		b.incrementGrade();
		std::cout << b << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}