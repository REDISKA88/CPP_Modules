#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook {

public:
	int				count;
	Contact			contactList[8];

	void			search();
	std::string		property(std::string);

	PhoneBook();
	~PhoneBook();
};


#endif
