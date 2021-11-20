#include "Dog.hpp"

Dog::Dog(): Animal("Dog")
{
	std::cout << "Un chien apparait !" << std::endl; 
}

Dog::~Dog()
{
	std::cout << "Un chien disparait !" << std::endl;
}

Dog::Dog(const Dog &c)
{
	if (this != (Dog*)&c)
	{
		this->type = c.type;
	}
}

Dog& Dog::operator=(const Dog &st)
{
	if (this != &st)
		this->type = st.type;
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "OAF OAF OAF !!!!" << std::endl;
}
