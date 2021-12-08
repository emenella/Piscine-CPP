#include "Cure.hpp"

Cure::Cure(): AMateria() { type = "<NoType>"; }

Cure::Cure(std::string const & type): AMateria()
{
	this->type = type;
}

Cure::Cure(Cure &c): AMateria(), type(c.type) {}

Cure::~Cure() {}

Cure& Cure::operator=(const Cure& st)
{
	if (this != &st)
		this->type = st.type;
	return *this;
}

AMateria* Cure::clone() const
{
    AMateria *am = new AMateria(type);
    return (am);
}
