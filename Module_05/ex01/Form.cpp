#include "Form.hpp"

Form::Form():  _is_signed(false), _signGrade(1), _executeGrade(1), _name("Default Form") {
	std::cout << "Form was created" << std::endl;
}

std::string Form::getName() const {
	return _name;
}

bool Form::getIsSigned() const {
	return _is_signed;
}

int Form::getSignGrade() const {
	return _signGrade;
}

int Form::getExecuteGrade() const {
	return _executeGrade;
}

Form::Form(int signGrade, int executeGrade, std::string name) {

	if (signGrade < 1)
		throw Form::GradeTooLowException();
	if (signGrade > 150)
		throw Form::GradeTooHighException();
	if (executeGrade < 1)
		throw Form::GradeTooLowException();
	if (executeGrade > 150)
		throw Form::GradeTooHighException();

	_name = name;
	_signGrade = signGrade;
	_executeGrade = executeGrade;
}

void Form::beSigned(const Bureaucrat &B) {

	if (B.getGrade() > _signGrade)
		throw Form::GradeTooLowException();
	_is_signed = true;
}

Form::Form(const Form &F) {
	*this = F;
}

Form &Form::operator=(const Form &F) {
	if (this != &F) {
		_is_signed = F.getIsSigned();
		_signGrade = F.getSignGrade();
		_executeGrade = F.getExecuteGrade();
		_name = F.getName();
	}
}

Form::~Form() {
	std::cout << "Bureaucrat *Dies From Cringe*" << std::endl;
}

std::ostream& operator<<(std::ostream&out, Form const &F) {
	std::string signStr;

	if (F.getIsSigned() == true)
		signStr = "signed";
	else
		signStr = "not signed";

	out << F.getName() << " " <<  signStr
	<<  " sign grade: " << F.getSignGrade()
	<< " execute grade: " << F.getExecuteGrade()
	<< std::endl;
}

const char *Form::GradeTooHighException::what() const throw() {
	return "The grade is too high for the form";
}

const char *Form::GradeTooLowException::what() const throw() {
	return "The grade is too low for the form";
}