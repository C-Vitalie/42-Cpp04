#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
private:
	Brain*	me;
public:
	/* Constructor */
	Dog();
	Dog(const Dog& src);

	/* Operator */
	Dog & operator=(const Dog& src);

	/*  Destructor */
	~Dog();

	/* Other */
	void makeSound() const;
};

#endif
