#include "PhoneBook.hpp"

int main()
{
	PhoneBook pb;
	std::string input;

	std::cout << "Welcome to PhoneBook from 80's\n";
	std::cout << "Use the following commands: ADD, SEARCH, EXIT\n";
	std::getline(std::cin, input);

	int i = 0;
	while (input != "EXIT")
	{
		if (input == "ADD")
		{
			if (pb.count == 8)
			{
				if (i == pb.count)
					i = 0;
				pb.contactList[i].addContact();
				i++;
			}
			else
			{
				pb.contactList[pb.count].addContact();
				pb.count += 1;
			}
		}
		else if (input == "SEARCH" && pb.count == 0)
			std::cout << "Phonebook is empty" << std::endl;
		else if (input == "SEARCH" && pb.count != 0)
			pb.search();
		else
			std::cout << "Wrong command\n";
		std::getline(std::cin, input);
	}
	return (0);
}