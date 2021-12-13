#include "Bureaucrat.hpp"
Bureaucrat::Bureaucrat(): _grade(100), _name("Default Name"){
	std::cout << "Bureaucrat was created" << std::endl;
}

Bureaucrat::Bureaucrat(int grade, std::string name): _grade(grade), _name(name){
	if (_grade < 1)
		throw Bureaucrat::GradeTooLowException();
	if (_grade > 150)
		throw Bureaucrat::GradeTooHighException();
	std::cout << "Bureaucrat was created" << std::endl;
}

int Bureaucrat::getGrade() const {
	return _grade;
}

std::string Bureaucrat::getName() const {
	return _name;
}

void Bureaucrat::setGrade(int grade) {
	if (grade < 1)
		throw Bureaucrat::GradeTooLowException();
	if (grade > 150)
		throw Bureaucrat::GradeTooHighException();
	_grade = grade;
}

void Bureaucrat::incrementGrade() {
	if (_grade >= 150)
		throw Bureaucrat::GradeTooHighException();
	++_grade;
}

void Bureaucrat::decrementGrade() {
	if (_grade <= 1)
		throw Bureaucrat::GradeTooLowException();
	--_grade;
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
	return "The grade is too low";
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
	return "The grade is too high";
}

Bureaucrat::Bureaucrat(const Bureaucrat &B) {
	*this = B;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &B) {
	if (this == &B)
		this->_grade = B.getGrade();
	return *this;
}

Bureaucrat::~Bureaucrat() {
	std::cout << "Bureaucrat *Dies From Cringe*" << std::endl;
}

std::ostream& operator<<(std::ostream&out, Bureaucrat const &B){
	out << B.getName() << ", bureaucrat grade " << B.getGrade();
	return out;
}
