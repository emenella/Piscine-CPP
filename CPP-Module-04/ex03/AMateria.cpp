#include "AMateria.hpp"
#include "ICharacter.hpp"

std::string const & AMateria::getType() const { return type; }

AMateria::AMateria(): type("")
{

}

AMateria::AMateria(std::string const & type): type(type)
{

}

AMateria::AMateria(AMateria &c): type(c.type)
{

}

AMateria::~AMateria()
{

}

AMateria& AMateria::operator=(const AMateria &st)
{
	if (this != &st)
		this->type = st.type;
	return (*this);
}

void AMateria::use(ICharacter& target)
{
	if (this->type == "ice")
		std::cout << "* shoots an "<< this->type <<" bolt at " << target.getName() << " *" << std::endl;
	else if (this->type == "cure")
		std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}