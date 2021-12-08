#include "Ice.hpp"

Ice::Ice(): AMateria() { type = "<NoType>"; }

Ice::Ice(std::string const & type): AMateria()
{
	this->type = type;
}

Ice::Ice(Ice &c): AMateria(), type(c.type) {}

Ice::~Ice() {}

Ice& Ice::operator=(const Ice& st)
{
	if (this != &st)
		this->type = st.type;
	return *this;
}

AMateria* Ice::clone() const
{
    AMateria *am = new AMateria(type);
    return (am);
}
