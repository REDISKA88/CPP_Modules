#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target): Form(25, 5, target){

	std::cout << "Presidential Pardon Form constructor was called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &C) {
	*this = C;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &C) {
	if (this != &C)
		return *this;
	return *this;
}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const {
	if(this->getIsSigned() == false)
		throw PresidentialPardonForm::Form::notSignFormException();
	if (executor.getGrade() > this->getExecuteGrade())
		throw PresidentialPardonForm::Form::GradeTooHighException();
	std::cout << getName() << " has been pardoned by Zafod Beeblebrox" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm(){
	std::cout << "Presidential Pardon Form destructor was called" << std::endl;
}