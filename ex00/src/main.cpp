#include "Dog.hpp"
#include "Cat.hpp"

#include "WrongCat.hpp"

int main()
{
	std::cout << "=== 1. SUBJECT TESTS (VALID POLYMORPHISM) ===" << std::endl;
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	delete meta;
	delete j;
	delete i;

	std::cout << "\n=== 2. WRONG ANIMAL TESTS (NO POLYMORPHISM) ===" << std::endl;
	const WrongAnimal* wrongMeta = new WrongAnimal();
	const WrongAnimal* wrongCat = new WrongCat();
	std::cout << wrongCat->getType() << " " << std::endl;
	wrongCat->makeSound(); 
	wrongMeta->makeSound();
	delete wrongMeta;
	delete wrongCat;

	std::cout << "\n=== 3. ORTHODOX CANONICAL FORM TESTS (ON THE STACK) ===" << std::endl;
	Dog originalDog;
	std::cout << "Creating a copy using copy constructor:" << std::endl;
	Dog copyDog(originalDog);
	std::cout << "Creating another dog and using assignment operator:" << std::endl;
	Dog assignedDog;
	assignedDog = originalDog;
	std::cout << "End of scope, automatic destructions:" << std::endl;
	return 0;
}
