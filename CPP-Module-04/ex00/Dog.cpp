#include "Dog.hpp"

Dog::Dog():type("")
{
	std::cout << "Un chat apparait !" << std::endl; 
}

Dog::~Dog()
{
	std::cout << "Un chat disparait !" << std::endl;
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

void Dog::makeSound()
{
	std::cout << "OAF OAF OAF !!!!" << std::endl;
}
