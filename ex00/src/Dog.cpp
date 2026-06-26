#include "Dog.hpp"

/* Constructor */
Dog::Dog() {
	std::cout << "Dog default constructor called." << std::endl;
	this->type = "Dog";
}
Dog::Dog(const Dog& src): Animal() {
	std::cout << "Dog copy constructor called." << std::endl;
	this->type = src.type;
}

/* Operator */
Dog&	Dog::operator=(const Dog& src) {
	std::cout << "Dog assignment operator called." << std::endl;
    if (this != &src) {
        this->type = src.type;
    }
	return (*this);
}

/* Destructor */
Dog::~Dog() {
	std::cout << "Dog destructor called." << std::endl;
}

/* Geter */

/* Other */

void	Dog::makeSound() const {
	std::cout << "Woof! Woof!" << std::endl;
}
