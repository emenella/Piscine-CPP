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
		Character& operator=(const Character& st);
		~Character();
		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};