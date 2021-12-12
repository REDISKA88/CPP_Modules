#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main(){

	Animal* A = new Animal();
	Animal* C = new Cat();
	Animal* D = new Dog();
	//WrongAnimal* W = new WrongCat();

	A->makeSound();
	C->makeSound();
	D->makeSound();
	//W->makeSound();

	delete A;
	delete C;
	delete D;
	//delete W;

	return 0;
}