#ifndef DOG_HPP
# define DOG_HPP
#include "Animal.hpp"

class Dog : public Animal
{
public:
	/* Constructor */
	Dog();
	Dog(const Dog& src);

	/* Operator */
	Dog & operator=(const Dog& src);

	/*  Destructor */
	~Dog();

	/* Other */
	std::string	getType() const;
	void makeSound() const;
};

#endif
