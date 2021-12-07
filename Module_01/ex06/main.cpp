#include "Karen.hpp"
int main(int argc, const char **argv)
{
	Karen k;
	std::string level = argv[1];
	(void) argc;

	switch (argv[1][0])
	{
		case 68:
			k.complain(level);
			break;
		case 73:
			k.complain(level);
			break;
		case 87:
			k.complain(level);
			break;
		case 69:
			k.complain(level);
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
	}
	return (0);
}