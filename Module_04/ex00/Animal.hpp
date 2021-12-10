#ifndef CPP_MODULES_ANIMAL_HPP
#define CPP_MODULES_ANIMAL_HPP

#include <iostream>

class Animal {

protected:
	std::string type;
public:
	Animal();
	Animal(const Animal&A);

	Animal& operator=(const Animal&A);
	std::string getType() const;
	void setType(const std::string);
	virtual void makeSound() const;

	virtual ~Animal();
};


#endif
