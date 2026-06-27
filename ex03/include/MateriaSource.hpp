#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
	AMateria* _learnsed[4];

public:
	/* Destructor */
	MateriaSource();
	MateriaSource(const MateriaSource& src);

	/* Opertator */
	MateriaSource& operator=(const MateriaSource& src);

	/* Destructor */
	~MateriaSource();

	/* Other */
	void learnMateria(AMateria* m);
	AMateria* createMateria(std::string const & type);
};

#endif