#include "Form.hpp"

int main() {

	Bureaucrat	B( 100 );
	Form		F( "new form", 1, 1 );
	Form		Form( "FORM 2", 150, 2 );

	std::cout << Form << std::endl;
	try {

		Form.signForm();
	}
	catch (Form::GradeTooLowException &e) {

		std::cout << e.what() << std::endl;
	}

	std::cout << F << std::endl;

	try {

		Form	F2( "try form", 200, 2 );

		std::cout << F2 << std::endl;
	}
	catch (Form::GradeTooHighException &e) {

		std::cout << e.what() << std::endl;
	}
	catch (Form::GradeTooLowException &e) {

		std::cout << e.what() << std::endl;
	}
	return 0;
}