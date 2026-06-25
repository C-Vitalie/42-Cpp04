#include "Animal.hpp"
/* Constructor */
Animal::Animal(): type("Animal") {
	std::cout << "Animal default constructor called." << std::endl;
}

Animal::Animal(const Animal& src): type(src.type) {
	std::cout << "Animal copy constructor called." << std::endl;
}

/* Operator */
Animal&	Animal::operator=(const Animal& src) {
	std::cout << "Animal assignment operator called." << std::endl;
	if (this != &src) {
		this->type = src.type;
	}
	return (*this);
}

/* Destructor */
Animal::~Animal() {
	std::cout << "Animal destructor called." << std::endl;
}

/* Geter */
std::string	Animal::getType() const {
	return (this->type);
}

/* Other */

void		Animal::makeSound() const {
    std::cout << "* Bruit d'animal indéfinissable *" << std::endl;
}
