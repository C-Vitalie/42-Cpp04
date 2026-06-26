#include "Cure.hpp"
#include "ICharacter.hpp"

/* Constructor */
Cure::Cure(): AMateria("cure") {}

Cure::Cure(const Cure& src): AMateria(src) {}

/* Operator */
Cure&	Cure::operator=(const Cure& src) {
	(void)src;
	return (*this);
}

/* Destructor */
Cure::~Cure() {}

/* Other */
AMateria* Cure::clone() const {
	return (new Cure(*this));
}

void	Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() <<"’s wounds *" << std::endl;
}
