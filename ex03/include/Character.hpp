#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include "ICharacter.hpp"
# include "AMateria.hpp"

class Character : public ICharacter
{
private:
    std::string _name;
    AMateria* _inventory[4];

public:
    /* Constructor */
    Character(std::string const & name = "no_name");
    Character(const Character& src);

    /* Operator */
    Character& operator=(const Character& src);

    /* Destructor */
    ~Character();

    /* Geter */
    std::string const & getName() const;

    /* Other */
    void equip(AMateria* m);
    void unequip(int idx);
    void use(int idx, ICharacter& target);
};

#endif