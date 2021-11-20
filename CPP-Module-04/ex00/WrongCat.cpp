#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	WrongAnimal("Tac");
	std::cout << "Un Tac apparait !" << std::endl; 
}

WrongCat::~WrongCat()
{
	std::cout << "Un Tac disparait !" << std::endl;
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
	std::cout << "WOEM WOEM WOEM !!!!" << std::endl;
}
