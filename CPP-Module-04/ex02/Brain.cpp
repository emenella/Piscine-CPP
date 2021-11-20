#include "Brain.hpp"

Brain::Brain()
{
	ideas = new std::string[100];
}

Brain::Brain(const Brain& cp)
{
	this->ideas = cp.ideas;
}

Brain::~Brain()
{
	delete[] ideas;
}

Brain& Brain::operator=(const Brain b)
{
	if (this != &b)
	{
		this->ideas = b.ideas;
	}
	return *this;
}
