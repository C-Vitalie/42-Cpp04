#ifndef BRAIN_HPP
# define BRAIN_HPP
#include <iostream>

class Brain
{
protected:
	std::string	ideas[100];
public:
	/* Constructor */
	Brain();
	Brain(const Brain& src);

	/* Operator */
	Brain & operator=(const Brain& src);

	/* Destructor */
	~Brain();

	/* Geter */
	std::string	getIdea(int	idx) const;
	
	/* Seter */
	void		setIdea(int	idx, std::string new_idea);

	/* Other */

};

#endif
