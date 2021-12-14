#include "Intern.hpp"

int main() {
	try {
		Intern In;
		Form *f;

		f = In.makeForm("Presidential Pardon", "Press F");
		delete f;
	}
	catch (const std::exception& e){
		std::cout << e.what() << std::endl;
	}
	return 0;
}