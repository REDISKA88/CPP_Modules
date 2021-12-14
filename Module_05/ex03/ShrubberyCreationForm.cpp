#include "ShrubberyCreationForm.hpp"
ShrubberyCreationForm::ShrubberyCreationForm(std::string target): Form(145, 137, target) {
	std::cout << "Shrubbery Creation Form constructor was called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &C) {
	*this = C;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &C) {
	if (this != &C)
		return *this;
	return *this;
}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const {
	if(this->getIsSigned() == false)
		throw ShrubberyCreationForm::Form::notSignFormException();
	if (executor.getGrade() > this->getExecuteGrade())
		throw ShrubberyCreationForm::Form::GradeTooHighException();

	std::ofstream file;
	file.open(getName() + "_shrubbery");
	file << "         v         " << std::endl;
	file << "        >X<        " << std::endl;
	file << "         A         " << std::endl;
	file << "        d$b        " << std::endl;
	file << "      .d\\$$b.      " << std::endl;
	file << "    .d$i$$\\$$b.    " << std::endl;
	file << "       d$$@b       " << std::endl;
	file << "      d\\$$$ib      " << std::endl;
	file << "    .d$$$\\$$$b     " << std::endl;
	file << "  .d$$@$$$$\\$$ib.  " << std::endl;
	file << "      d$$i$$b      " << std::endl;
	file << "     d\\$$$$@$b     " << std::endl;
	file << "  .d$@$$\\$$$$$@b.  " << std::endl;
	file << ".d$$$$i$$$\\$$$$$$b." << std::endl;
	file << "        ###        " << std::endl;
	file << "        ###        " << std::endl;
	file << "        ###        " << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm(){
	std::cout << "Shrubbery Creation Form destructor was called" << std::endl;
}