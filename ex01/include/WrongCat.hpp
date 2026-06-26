#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
	/* Constructor */
	WrongCat();
	WrongCat(const WrongCat& src);

	/* Operator */
	WrongCat & operator=(const WrongCat& src);

	/* Destructor */
	~WrongCat();

	/* Other */
	std::string	getType() const;
	void makeSound() const;
};

#endif
