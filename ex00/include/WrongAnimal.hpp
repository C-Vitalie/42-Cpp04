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
	~WrongAnimal();

	/* Geter*/
	std::string	getType() const;

	/* Other */
	void		makeSound() const;

};

#endif
