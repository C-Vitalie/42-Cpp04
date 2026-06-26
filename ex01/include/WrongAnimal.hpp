#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# include <iostream>

class WrongAnimal
{
protected:
	std::string	type;
public:
	/* Constructor */
	WrongAnimal();
	WrongAnimal(const WrongAnimal& src);

	/* Operator */
	WrongAnimal & operator=(const WrongAnimal& src);

	/* Destructor */
	virtual ~WrongAnimal();

	/* Geter*/
	virtual	std::string	getType() const;

	/* Other */
	virtual void		makeSound() const;

};

#endif
