#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
class Cat: public Animal {
private:
	Brain *brain;
public :
	Cat();
	Cat(const Cat&);
	Cat& operator=(const Cat&);

	void getBrain() const;
	void makeSound() const;
	 ~Cat();
};


#endif