#include <iostream>

int main(){
	std::string str = "HI THIS IS BRAIN";

	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "address in memory of the string          = " << &str << std::endl;
	std::cout << "address of the string by using stringPTR = " << stringPTR << std::endl;
	std::cout << "address of the string by using stringREF = " << &stringREF << std::endl;

	std::cout << *stringPTR << std::endl;
	std::cout << stringREF << std::endl;

	return 0;
}

