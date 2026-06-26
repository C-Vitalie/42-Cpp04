#include "WrongCat.hpp"

/* Constructor */
WrongCat::WrongCat() {
	this->type = "WrongCat";
    std::cout << "WrongCat default constructor called." << std::endl;
}
WrongCat::WrongCat(const WrongCat& src): WrongAnimal() {
	std::cout << "WrongCat copy constructor called." << std::endl;
	this->type = src.type;
}

/* Operator */
WrongCat&	WrongCat::operator=(const WrongCat& src) {
	std::cout << "WrongCat assignment operator called." << std::endl;
	if (this != &src) {
		this->type = src.type;
	}
	return (*this);
}

/* Destructor */
WrongCat::~WrongCat() {
	std::cout << "WrongCat destructor called." << std::endl;
}

/* Geter */
std::string	WrongCat::getType() const {
	return (this->type);
}

/* Other */

void	WrongCat::makeSound() const {
	std::cout << "Vroum Vroum" << std::endl;
}
