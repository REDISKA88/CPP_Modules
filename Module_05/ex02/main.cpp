#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main() {
	try {
		Bureaucrat b(1, "Retsu");
		Form *f = new ShrubberyCreationForm("tree");
		f->beSigned(b);
		b.executeForm(*f);
	}
	catch (const std::exception& e){
		std::cout << e.what() << std::endl;
	}
	try {
		Bureaucrat b(1,"Chun-Li");
		Form *f = new RobotomyRequestForm("mrRobot");
		f->beSigned(b);
		b.executeForm(*f);
	}
	catch (const std::exception& e){
		std::cout << e.what() << std::endl;
	}
	return 0;
}