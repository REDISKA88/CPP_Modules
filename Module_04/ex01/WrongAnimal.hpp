#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
#include <iostream>

class WrongAnimal {
protected:
	std::string type;
public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal&W);
	WrongAnimal& operator=(const WrongAnimal&W);

	void setType(std::string type);
	std::string getType() const;
	virtual void makeSound() const;

	virtual ~WrongAnimal();
};


#endif
