#include "Form.hpp"

int main() {
	try {
		Bureaucrat b1(1, "Lee");
		Form f1(100, 150, "Hong Kong movie");
		std::cout << b1 << std::endl;

		b1.signForm(f1);
		f1.beSigned(b1);
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}