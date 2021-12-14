#ifndef INTERN_HPP
#define INTERN_HPP

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Form;

class Intern {

public:
	Form* President(std::string target);
	Form* Robotomy(std::string target);
	Form* Shrubbery(std::string target);

	Intern();
	Form* makeForm(std::string name, std::string target);

	class FormDoesNotExist : public std::exception {
		virtual const char *what() const throw();
	};

	~Intern();
};


#endif
