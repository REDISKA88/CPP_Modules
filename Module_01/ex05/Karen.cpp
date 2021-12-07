#include "Karen.hpp"
Karen::Karen(){}


void Karen::complain(std::string level) {

	const char *str = level.c_str();
	void	(Karen::*f[])(void) = {
			&Karen::debug,
			&Karen::info,
			&Karen::warning,
			&Karen::error
	};
	switch (str[0])
	{
		case 68:
			(this->*f[0])();
			break ;
		case 73:
			(this->*f[1])();
			break ;
		case 87:
			(this->*f[2])();
			break ;
		case 69:
			(this->*f[3])();
			break ;
		default:
			break;
	}

}
void Karen::debug() {
	std::cout << "DEBUG" << std::endl;
	std::cout << "I love to get extra bacon\n"
				 "for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" <<std::endl;
}
void Karen::info() {
	std::cout << "INFO" << std::endl;
	std::cout << "I cannot believe adding extra\n"
				 "bacon cost more money. You don’t put enough! If you did I would not have to ask\n"
				 "for it!" <<std::endl;
}

void Karen::warning() {
	std::cout << "WARNING" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been\n"
	"coming here for years and you just started working here last month." <<std::endl;
}

void Karen::error() {
	std::cout << "ERROR" << std::endl;
	std::cout << "This is unacceptable, I want to speak to the manager now." <<std::endl;
}

Karen::~Karen(){}