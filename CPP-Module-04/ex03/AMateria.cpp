#include "AMateria.hpp"

AMateria::AMateria()
{
	AMateria::type = "<NoType>";
}

AMateria::AMateria(std::string const & type)
{
	this->type = type;
}

AMateria::~AMateria() {}

AMateria& AMateria::operator=(const AMateria& st)
{
	if (this != &st)
		this->type = st.type;
	return *this;
}

AMateria* AMateria::clone()
{
	AMateriaClone = new AMateria();
	AMateriaClone = AMateria;
	return (AMateriaClone);
}

std::string const & AMateria::getType() const { return type; }
