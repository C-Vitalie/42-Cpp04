#include "AMateria.hpp"

/* Constructor */
AMateria::AMateria(std::string const & type): mat_type(type) {
	std::cout << "AMateria default constructor called." << std::endl;
}

AMateria::AMateria(const AMateria& src): mat_type(src.mat_type) {
	std::cout << "AMateria copy constructor called." << std::endl;
}

/* Operator */
AMateria& AMateria::operator=(const AMateria& src) {
    std::cout << "AMateria assignment operator called." << std::endl;
    (void)src;
    return (*this);
}

/* Geter */
AMateria::~AMateria() {
	std::cout << "AMateria destructor called." << std::endl;
}

/* Other */
std::string const & AMateria::getType() const {
    return (this->mat_type);
}

void AMateria::use(ICharacter& target) {
	(void)target;
}
