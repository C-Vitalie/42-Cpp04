#include "Cat.hpp"

/* Constructor */
Cat::Cat() {
	std::cout << "Cat default constructor called." << std::endl;
	this->me = new Brain();
	this->type = "Cat";
}
Cat::Cat(const Cat& src): Animal(src){
	std::cout << "Cat copy constructor called." << std::endl;
	this->me = new Brain(*(src.me));
	this->type = src.type;
}

/* Operator */
Cat&	Cat::operator=(const Cat& src) {
	std::cout << "Cat assignment operator called." << std::endl;
    if (this != &src) {
		delete this->me;
		this->me = new Brain(*(src.me));
        this->type = src.type;
    }
	return (*this);
}

/* Destructor */
Cat::~Cat() {
	std::cout << "Cat destructor called." << std::endl;
	delete this->me;
}

/* Geter */

/* Other */

void	Cat::makeSound() const {
	std::cout << "Meow... Meow..." << std::endl;
}
