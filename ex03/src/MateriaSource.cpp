#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	for (int i = 0; i < 4; i++)
		this->_learnsed[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& src) {
	for (int i = 0; i < 4; i++) {
		if (src._learnsed[i])
			this->_learnsed[i] = src._learnsed[i]->clone();
		else
			this->_learnsed[i] = NULL;
	}
}

MateriaSource& MateriaSource::operator=(const MateriaSource& src) {
	if (this != &src) {
		for (int i = 0; i < 4; i++) {
			if (this->_learnsed[i])
				delete this->_learnsed[i];
			if (src._learnsed[i])
				this->_learnsed[i] = src._learnsed[i]->clone();
			else
				this->_learnsed[i] = NULL;
		}
	}
	return (*this);
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < 4; i++) {
		if (this->_learnsed[i])
			delete this->_learnsed[i];
	}
}

void MateriaSource::learnMateria(AMateria* m) {
	if (!m) return;
	for (int i = 0; i < 4; i++) {
		if (this->_learnsed[i] == NULL) {
			this->_learnsed[i] = m;
			return;
		}
	}
	delete m;
}

AMateria* MateriaSource::createMateria(std::string const & type) {
	for (int i = 0; i < 4; i++) {
		if (this->_learnsed[i] && this->_learnsed[i]->getType() == type) {
			return (this->_learnsed[i]->clone());
		}
	}
	return (0); // Type inconnu
}