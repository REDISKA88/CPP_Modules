#include "PhoneBook.hpp"
PhoneBook::PhoneBook() {
	count = 0;
}

std::string PhoneBook::property(std::string property) {

	std::string str;

	if (property.length() > 10)
	{
		str = property.substr(0,9) + ".";
		return (str);
	}
	return (property);
}


void PhoneBook::search() {
	if (count == 0)
	{
		std::cout << "Phonebook is empty" << std::endl;
		return;
	}
	std::cout << std::setw(10) << std::right << "INDEX"
			  << "|" << std::setw(10) << "FIRST NAME"
			  << "|" << std::setw(10) << "LAST NAME"
			  << "|" << std::setw(10) << "NICKNAME"
			  << "|" << std::endl;
	for(int i = 0; i < count; i++)
	{
		if (contactList[i].is_empty == 0)
		{
			std::cout << std::setw(10) << std::right << i
					  << "|" << std::setw(10) << property(contactList[i].firstName)
					  << "|" << std::setw(10) << property(contactList[i].lastName)
					  << "|" << std::setw(10) << property(contactList[i].nickname)
					  << "|" << std::endl;
		}
	}
	int i;
	std::string index;
	std::cout << "Enter the index of the desired contact: ";
	std::getline(std::cin, index);
	while (index.length() > 1 || isdigit(index[0]) == 0 || (i = atoi(index.c_str())) >= count)
	{
		std::cout << "Error. Enter the index of an existing contact: ";
		std::getline(std::cin, index);
	}
	i = index[0] - '0';
	contactList[i].info();
}
PhoneBook::~PhoneBook() {}