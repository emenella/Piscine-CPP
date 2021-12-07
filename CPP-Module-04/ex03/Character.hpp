#pragma once
# include "ICharacter.hpp"
# include "AMateria.hpp"
# include <iostream>
# define SLOT 4

class Character: public ICharacter
{
	private:
		AMateria	*inventory[SLOT];
		std::string	name;
	public:
		Character();
		Character(std::string name);
		Character(Character&);
		Character& Character::operator=(const Character& st);
		virtual ~Character();
		virtual std::string const & getName() const;
		virtual void equip(AMateria* m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter& target);
};