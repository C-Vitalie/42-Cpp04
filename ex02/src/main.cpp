#include "Dog.hpp"
#include "Cat.hpp"
#include "limits"
#include "WrongCat.hpp"

int main()
{
    std::cout << "=== 1. TEST ANIMALS ARRAY ===" << std::endl;
    
    int const array_size = 10;
    Animal* animals[array_size];

    for (int i = 0; i < array_size; i++) {
        if (i < array_size / 2) {
            animals[i] = new Dog();
        } else {
            animals[i] = new Cat();
        }
    }

    std::cout << "\n--- ARRAY DESTRUCTION ---" << std::endl;
    for (int i = 0; i < array_size; i++) {
        delete animals[i];
    }

    std::cout << "\n=== 2. DEEP COPY TEST ===" << std::endl;
    Dog basicDog;
    Dog tmpDog = basicDog;
	return (0);
}
