#include "AMateria.hpp"
#include "ICharacter.hpp"

std::string const & AMateria::getType() const { return type; }

void AMateria::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}