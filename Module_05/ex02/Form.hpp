#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"
class Bureaucrat;
class Form {

private:
	bool _is_signed;
	const int _signGrade;
	const  int _executeGrade;
	std::string const _name;

public:
	Form();
	Form(const int signGrade, const int executeGrade, std::string name);
	Form(const Form&);
	Form& operator=(const Form&);

	std::string getName() const;
	bool getIsSigned() const;
	int getSignGrade() const;
	int getExecuteGrade() const;


	virtual void		execute(Bureaucrat const & executor) const = 0;

	void beSigned(Bureaucrat const &B);
	void setName(const std::string);
	void setSignGrade(int signGrade);
	void setExecuteGrade(int executeGrade);

	class GradeTooHighException: public std::exception {
		virtual const char *what() const throw();
	};

	class GradeTooLowException: public std::exception {
		virtual const char *what() const throw();
	};

	class notSignFormException: public std::exception {
		virtual const char *what() const throw();
	};

	virtual ~Form();
};

std::ostream& operator<<(std::ostream&out, Form const &F);

#endif
