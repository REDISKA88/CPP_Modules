#include "Intern.hpp"

Intern::Intern(){
	std::cout << "Intern constructor was called" << std::endl;
}

Form*	Intern::makeForm(std::string name, std::string target) {
	Form* (Intern::*f[3])(std::string) = {&Intern::Robotomy, &Intern::Shrubbery, &Intern::President};
	std::string names[3] = {"Robotomy Request", "ShrubberyCreation", "Presidential Pardon"};
	for (int i = 0; i < 3; i++)
		if (names[i] == name)
			return	(this->*(f[i]))(target);
	std::cout << "Form <" << name << "> not found" << std::endl;
	return (NULL);
}

Form *Intern::President(std::string target) {
	return new PresidentialPardonForm(target);
}

Form *Intern::Robotomy(std::string target) {
	return new RobotomyRequestForm(target);
}

Form *Intern::Shrubbery(std::string target) {
	return new ShrubberyCreationForm(target);
}


Intern::~Intern(){
	std::cout << "Intern destructor was called" << std::endl;
}

const char *Intern::FormDoesNotExist::what() const throw() {
	return "No form with this name exists";
}