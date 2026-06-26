
#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>

class Animal
{
protected:
	std::string	type;
public:
	/* Constructor */
	Animal();
	Animal(const Animal& src);

	/* Operator */
	Animal & operator=(const Animal& src);

	/* Destructor */
	virtual ~Animal();

	/* Other */
	virtual	std::string	getType() const;
	virtual void		makeSound() const = 0;
};

#endif
