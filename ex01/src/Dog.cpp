#include "Dog.hpp"

/* Constructor */
Dog::Dog() {
	std::cout << "Dog default constructor called." << std::endl;
	this->me = new Brain();
	this->type = "Dog";
}
Dog::Dog(const Dog& src): Animal(src) {
	std::cout << "Dog copy constructor called." << std::endl;
	this->me = new Brain(*(src.me));
	this->type = src.type;
}

/* Operator */
Dog&	Dog::operator=(const Dog& src) {
	std::cout << "Dog assignment operator called." << std::endl;
    if (this != &src) {
		delete this->me;
		this->me = new Brain(*(src.me));
        this->type = src.type;
    }
	return (*this);
}

/* Destructor */
Dog::~Dog() {
	std::cout << "Dog destructor called." << std::endl;
	delete this->me;
}

/* Geter */
std::string	Dog::getType() const {
	return (this->type);
}

/* Other */

void	Dog::makeSound() const {
	std::cout << "Woof! Woof!" << std::endl;
}
