#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	type = "<NoType>";
}

WrongAnimal::WrongAnimal(std::string set)
{
	type = set;
}

WrongAnimal::~WrongAnimal() {}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &ct)
{
	if (this != (WrongAnimal*)&ct)
		this->type = ct.type;
	return *this;
}

void WrongAnimal::makeSound()
{
	std::cout << "..." << std::endl << "no animals have heard" << std::endl;
}

std::string &WrongAnimal::getType() { return type; }