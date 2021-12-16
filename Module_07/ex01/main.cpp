#include <iostream>
#include "iter.hpp"

void func1(int &i)
{
		--i;
}

void func3(char &c)
{
		c = 'A';
}
void func4(double &d)
{
	d  += 1;
}

int main(){

	char char_array[] = {'b', 'c', 'd', 'e', 'f'};
	int int_array[] = {3, 3, 3, 3, 3, 3, 3, 3};
	double double_array[] = {0.1, 0.2, 0.3, 0.4};

	iter(int_array, 8, func1);
	iter(char_array, 5, func3);
	iter(double_array, 4, func4);

	std::cout << " " << std::endl;
	for (int i = 0; i < 5; ++i) {
		std::cout << char_array[i];
		std::cout << " ";
	}
	std::cout << " " << std::endl;
	for (int i = 0; i < 8; ++i) {
		std::cout << int_array[i];
		std::cout << " ";
	}

	std::cout << " " << std::endl;
	for (int i = 0; i < 4; ++i) {
		std::cout << double_array[i];
		std::cout << " ";
	}
	std::cout << " " << std::endl;

	return 0;

}