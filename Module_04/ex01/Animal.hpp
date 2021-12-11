#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal {

protected:
	std::string _type;
public:
	Animal();
	Animal(std::string);
	Animal(const Animal&A);

	Animal& operator=(const Animal&A);
	std::string getType() const;
	void setType(const std::string);
	virtual void makeSound() const;

	virtual ~Animal();
};


#endif
