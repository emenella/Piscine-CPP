#include "AMateria.hpp"

AMateria::AMateria()
{
	AMateria::type = "<NoType>";
}

AMateria::AMateria(std::string const & type)
{
	this->type = type;
}

AMateria::AMateria(AMateria &c): type(c.type) {}

AMateria::~AMateria() {}

AMateria& AMateria::operator=(const AMateria& st)
{
	if (this != &st)
		this->type = st.type;
	return *this;
}

std::string const & AMateria::getType() const { return type; }

void AMateria::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}