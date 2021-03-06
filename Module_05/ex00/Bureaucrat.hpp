#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>

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
	void setGrade(int grade);
	void incrementGrade();
	void decrementGrade();

	class GradeTooHighException: public std::exception {
		const char *what() const throw();
	};

	class GradeTooLowException: public std::exception {
		const char *what() const throw();
	};

	virtual ~Bureaucrat();
};

std::ostream& operator<<(std::ostream&out, Bureaucrat const &B);

#endif
