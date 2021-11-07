#include "Cat.hpp"

Cat::Cat():type("")
{
	std::cout << "Un chat apparait !" << std::endl; 
}

Cat::~Cat()
{
	std::cout << "Un chat disparait !" << std::endl;
}

Cat::Cat(const Cat &c)
{
	if (this != (Cat*)&c)
	{
		this->type = c.type;
	}
}

Cat& Cat::operator=(const Cat &st)
{
	if (this != &st)
		this->type = st.type;
	return *this;
}

void Cat::makeSound()
{
	std::cout << "MEOW MEOW MEOW !!!!" << std::endl;
}
