#ifndef ICE_HPP
# define ICE_HPP
# include "AMateria.hpp"

class Ice : public AMateria
{
public:
	/* Constructor */
	Ice();
	Ice(const Ice& src);

	/* Operator */
	Ice&	operator=(const Ice& src);

	/* Destructotr */
	~Ice();

	/* Other */
	AMateria*	clone() const;
	void		use(ICharacter& target);
};

#endif
