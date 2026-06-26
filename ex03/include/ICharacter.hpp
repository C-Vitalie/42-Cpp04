#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP
# include <iostream>

class AMateria;

class ICharacter
{
public:
    /* Destructor */
    virtual ~ICharacter() {}

    /* Geter */
    virtual std::string const & getName() const = 0;
    
    /* Other */
    virtual void equip(AMateria* m) = 0;
    virtual void unequip(int idx) = 0;
    virtual void use(int idx, ICharacter& target) = 0;
};

#endif