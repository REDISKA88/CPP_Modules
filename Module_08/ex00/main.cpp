#include "easyfind.hpp"

int main(){

	std::vector<int> vector_container;
	std::list<int> list_container;

	for(int i = 0; i < 10; i++)
		vector_container.push_back(i);
	for(int i = 0; i < 10; i++)
		list_container.push_back(i);

	{
		try {
			easyfind(vector_container, 100);
		}

		catch(const std::exception& e){
			std::cout << e.what() << std::endl;
		}
	}

	{
		try{
			easyfind(list_container, 100);
		}
		catch(const std::exception& e){
			std::cout << e.what() << std::endl;
		}
	}
	{
		try {
			easyfind(vector_container, 5);
		}
		catch(const std::exception& e){
			std::cout << e.what() << std::endl;
		}
	}

	{
		try{
			easyfind(list_container, 5);
		}
		catch(const std::exception& e){
			std::cout << e.what() << std::endl;
		}
	}
	return 0;
}