#include "Animal.hpp"

Animal::Animal()
{
	type = "<NoType>";
}

Animal::Animal(std::string set)
{
	type = set;
}

Animal::~Animal() {}

Animal& Animal::operator=(const Animal &ct)
{
	if (this != (Animal*)&ct)
		this->type = ct.type;
	return *this;
}

void Animal::makeSound()
{
	std::cout << "..." << std::endl << "no animals have heard" << std::endl;
}

const std::string Animal::getType() { return type; }