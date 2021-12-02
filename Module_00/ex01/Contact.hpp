#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <iomanip>

class Contact {

public:
	std::string		firstName;
	std::string		lastName;
	std::string		nickname;
	std::string		phoneNumber;
	std::string		darkestSecret;

	int				is_empty;
	void			addContact();
	void			info();

	Contact();
	~Contact();
};


#endif
