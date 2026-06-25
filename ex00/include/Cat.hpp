#ifndef CAT_HPP
# define CAT_HPP
#include "Animal.hpp"

class Cat : public Animal
{
public:
	/* Constructor */
	Cat();
	Cat(const Cat& src);

	/* Operator */
	Cat & operator=(const Cat& src);

	/* Destructor */
	~Cat();

	/* Other */
	std::string	getType() const;
	void makeSound() const;
};

#endif
