#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
private:
	Brain*	me;
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
