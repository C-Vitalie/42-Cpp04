#include "Cat.hpp"

/* Constructor */
Cat::Cat() {
	std::cout << "Cat default constructor called." << std::endl;
	this->type = "Cat";
}
Cat::Cat(const Cat& src): Animal() {
	std::cout << "Cat copy constructor called." << std::endl;
	this->type = src.type;
}

/* Operator */
Cat&	Cat::operator=(const Cat& src) {
	std::cout << "Cat assignment operator called." << std::endl;
    if (this != &src) {
        this->type = src.type;
    }
	return (*this);
}

/* Destructor */
Cat::~Cat() {
	std::cout << "Cat destructor called." << std::endl;
}

/* Geter */
std::string	Cat::getType() const {
	return (this->type);
}

/* Other */

void	Cat::makeSound() const {
	std::cout << "Meow... Meow..." << std::endl;
}
