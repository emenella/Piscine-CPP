#include "Ice.hpp"

Ice::Ice(): AMateria("ice") {}

Ice::Ice(std::string const & type): AMateria(type) {}

Ice::Ice(Ice &c): AMateria(c.type) {}

Ice::~Ice() {}

Ice& Ice::operator=(const Ice& st)
{
	if (this != &st)
		this->type = st.type;
	return *this;
}

Ice* Ice::clone() const
{
	Ice* clone = new Ice();
	return(clone);
}

// void Ice::use(ICharacter& target)
// {
// 	AMateria::use(target);
// }
