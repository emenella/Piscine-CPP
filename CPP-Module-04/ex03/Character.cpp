#include "Character.hpp"

Character::Character()
{
	inventory = new AMateria[4];
}

Character::Character(std::string name): name(name)
{

}

Character::Character(Character& c)
{
	this->name = c.name;
	this->inventory = c.inventory;
}

Character& Character::operator=(const Character& st)
{
	if (this != &st)
	{
		this->name = st.name;
		this->inventory = st.inventory;
	}
	return *this;
}

Character::~Character()
{
	delete[] inventory;
}

std::string const & Character::getName() const
{

}

void Character::equip(AMateria* m)
{

}

void Character::unequip(int idx)
{

}

void Character::use(int idx, ICharacter& target)
{

}
