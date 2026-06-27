#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;

	IMateriaSource*	skills = new MateriaSource();
	skills->learnMateria(new Ice());
	skills->learnMateria(new Ice());
	skills->learnMateria(new Ice());
	skills->learnMateria(new Cure());
	skills->learnMateria(new Ice());

	ICharacter*	mew = new Character("mew");
	
	AMateria* _tmp;
	_tmp = skills->createMateria("ice");
	mew->equip(_tmp);
	_tmp = skills->createMateria("ice");
	mew->equip(_tmp);
	_tmp = skills->createMateria("ice");
	mew->equip(_tmp);
	_tmp = skills->createMateria("ice");
	mew->equip(_tmp);
	_tmp = skills->createMateria("cure");
	mew->equip(_tmp);

	ICharacter* boby = new Character("boby");

	mew->use(0, *boby);
	mew->use(1, *boby);
	mew->use(2, *boby);
	mew->use(3, *boby);
	mew->use(4, *boby);

	delete _tmp;
	delete boby;
	delete mew;
	delete skills;

	return 0;
}