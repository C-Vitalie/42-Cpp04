#include "Brain.hpp"

/* Constructor */
Brain::Brain() {
	std::cout << "Brain default constructor called." << std::endl;
	for(int i = 0; i < 100; i++)
		ideas[i] = "";
}
Brain::Brain(const Brain& src) {
	std::cout << "Brain copy constructor called." << std::endl;
	for(int i = 0; i < 100; i++)
		ideas[i] = src.ideas[i];
}

/* Operator */
Brain&	Brain::operator=(const Brain& src) {
	std::cout << "Brain assignment operator called." << std::endl;
    if (this != &src) {
		for(int i = 0; i < 100; i++)
			this->ideas[i] = src.ideas[i];
    }
	return (*this);
}

/* Destructor */
Brain::~Brain() {
	std::cout << "Brain destructor called." << std::endl;
}

/* Geter */
std::string	Brain::getIdea(int idx) const {
	return (this->ideas[idx]);
}
/* Seter */
void	Brain::setIdea(int idx, std::string new_idea) {
	this->ideas[idx] = new_idea;
}

/* Other */
