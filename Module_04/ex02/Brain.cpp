#include "Brain.hpp"

Brain::Brain() {
	for (int i = 0; i < 100; i++)
		_ideas[i] = "";
	std::cout << "Brain was created" << std::endl;
}

Brain::Brain(const Brain&B){
	*this = B;
}

Brain &Brain::operator=(const Brain &B) {
	if (this != &B)
	{
		for(int i = 0; i < 100; i++)
			_ideas[i] = B._ideas[i];
	}
	return *this;
}
Brain::~Brain(){
	std::cout << "Brain was destroyed" << std::endl;
}