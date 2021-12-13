#include "RobotomyRequestForm.hpp"
#include <cstdlib>
RobotomyRequestForm::RobotomyRequestForm(std::string target): Form(72, 45, target) {
	std::cout << "Robotomy Request Form constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &C) {
	*this = C;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &C) {
	if (this != &C)
		return *this;
	return *this;
}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const {
	if(this->getIsSigned() == false)
		throw RobotomyRequestForm::Form::notSignFormException();
	if (executor.getGrade() > this->getExecuteGrade())
		throw RobotomyRequestForm::Form::GradeTooHighException();
	int v1;
	v1 = rand() % 100;
	std::cout <<"driiiiiiiiiiiiill" << std::endl;
	if (v1 % 2)
		std::cout << getName() << " has been pardoned by Zafod Beeblebrox" << std::endl;
	else
		std::cout << " it’s a failure" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm(){
	std::cout << "Robotomy Request Form destructor was called" << std::endl;
}