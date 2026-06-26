#ifndef CURE_HPP
# define CURE_HPP
# include "AMateria.hpp"

class Cure : public AMateria
{
public:
	/* Constructor */
	Cure();
	Cure(const Cure& src);

	/* Operator */
	Cure&	operator=(const Cure& src);

	/* Destructotr */
	~Cure();

	/* Other */
	AMateria*	clone() const;
	void		use(ICharacter& target);
};

#endif
