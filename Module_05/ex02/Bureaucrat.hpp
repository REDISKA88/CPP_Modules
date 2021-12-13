#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include "Form.hpp"

class Bureaucrat {

private:
	int	_grade;
	std::string const _name;
public:
	Bureaucrat();
	Bureaucrat(int grade, std::string name);
	Bureaucrat(const Bureaucrat&);
	Bureaucrat& operator=(const Bureaucrat&);

	std::string getName() const;
	int getGrade() const;
	void setName(const std::string);
 	void setGrade(int grade);
	void incrementGrade();
	void decrementGrade();

	void executeForm(Form const & form);

	class GradeTooHighException: public std::exception {

		virtual const char *what() const throw();
	};

	class GradeTooLowException: public std::exception {

		virtual const char *what() const throw();
	};

	virtual ~Bureaucrat();
};

std::ostream& operator<<(std::ostream&out, Bureaucrat const &B);

#endif