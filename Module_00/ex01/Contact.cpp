#include "Contact.hpp"
Contact::Contact()
{
	is_empty = 1;
}

void Contact::addContact() {
	std::cout << "Enter first name: ";
	getline(std::cin, firstName);
	std::cout << "Enter last name: ";
	getline(std::cin, lastName);
	std::cout << "Enter nickname: ";
	getline(std::cin, nickname);
	std::cout << "Enter phone number: ";
	getline(std::cin, phoneNumber);
	std::cout << "Enter darkest secret: ";
	getline(std::cin, darkestSecret);
	is_empty = 0;
}

void Contact::info()
{
	std::cout << "First name: " << firstName << std::endl;
	std::cout << "Last name: " << lastName << std::endl;
	std::cout << "Nickname: " << nickname << std::endl;
	std::cout << "Phone number: " << phoneNumber << std::endl;
	std::cout << "Darkest secret: " << darkestSecret << std::endl;
}

Contact::~Contact() {}