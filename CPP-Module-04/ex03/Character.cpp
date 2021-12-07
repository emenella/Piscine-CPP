#include "Character.hpp"

Character::Character(): inventory(), name("")
{
}

Character::Character(std::string name): name(name), inventory()
{

}

Character::Character(Character& c): name(c.name), inventory()
{
	for (int i = 0; i < SLOT; i++)
			this->inventory[i] = c.inventory[i];
}

Character& Character::operator=(const Character& st)
{
	if (this != &st)
	{
		this->name = st.name;
		for (int i = 0; i < SLOT; i++)
			this->inventory[i] = st.inventory[i];
	}
	return *this;
}

Character::~Character()
{
	delete[] inventory;
}

std::string const & Character::getName() const
{
	return (this->name);
}

void Character::equip(AMateria* m)
{
	for(int i = 0; i < SLOT; i++)
		if (inventory[i] == NULL)
		{
			inventory[i] = m;
			return ;
		}
	std::cout << "inventory is full" << std::endl;
}

void Character::unequip(int idx)
{
	inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if (this->inventory[idx])
		this->inventory[idx]->use(target);
}
