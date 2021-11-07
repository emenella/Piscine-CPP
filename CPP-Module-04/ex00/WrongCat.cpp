#include "WrongCat.hpp"

WrongCat::WrongCat(): type("Cat")
{
	std::cout << "Un chat apparait !" << std::endl; 
}

WrongCat::~WrongCat()
{
	std::cout << "Un chat disparait !" << std::endl;
}

WrongCat::WrongCat(const WrongCat &c)
{
	if (this != (WrongCat*)&c)
	{
		this->type = c.type;
	}
}

WrongCat& WrongCat::operator=(const WrongCat &st)
{
	if (this != &st)
		this->type = st.type;
	return *this;
}

void WrongCat::makeSound()
{
	std::cout << "MEOW MEOW MEOW !!!!" << std::endl;
}
