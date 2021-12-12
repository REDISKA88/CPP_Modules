#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main(){

	//Animal* A = new Animal();
	Animal* C = new Cat();
	Animal* D = new Dog();

	Animal *animals[100];

	for(int i = 0; i < 50; i++)
		animals[i] = new Cat();
	for(int i = 50; i < 100; i++)
		animals[i] = new Dog();

	animals[1]->makeSound();
	animals[2]->makeSound();

	for(int i = 99; i >= 0; i--)
		delete animals[i];

	const Animal* j = new Dog();
	const Animal* i = new Cat();

	delete j;//should not create a leak
	delete i;

	C->makeSound();
	D->makeSound();

	delete C;
	delete D;

	return 0;
}