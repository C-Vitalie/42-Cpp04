#include "WrongAnimal.hpp"

/* Constructor */
WrongAnimal::WrongAnimal(): type("WrongAnimal") {
	std::cout << "WrongAnimal default constructor called." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& src): type(src.type) {
	std::cout << "WrongAnimal copy constructor called." << std::endl;
}

/* Operator */
WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& src) {
	std::cout << "WrongAnimal assignment operator called." << std::endl;
	if (this != &src) {
		this->type = src.type;
	}
	return (*this);
}

/* Destructor */
WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal destructor called." << std::endl;
}

/* Geter */
std::string	WrongAnimal::getType() const {
	return (this->type);
}

/* Other */

void		WrongAnimal::makeSound() const {
    std::cout << "* Bruit d'animal indéfinissable *" << std::endl;
}
