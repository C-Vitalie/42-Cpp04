#ifndef AMATERIA_HPP
# define AMATERIA_HPP
# include <iostream>

class ICharacter;

class AMateria
{
protected:
	std::string mat_type;
public:
	/* Constructor */
	AMateria(std::string const & type = "");
	AMateria(const AMateria& src);
	
	/* Operator */
	AMateria&	operator=(const AMateria& src);

	/* Destructor */
	virtual ~AMateria();

	/* Geter */
	std::string const & getType() const;
	
	/* Other */
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};

#endif