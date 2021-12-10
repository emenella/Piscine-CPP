#include "Cure.hpp"

Cure::Cure(): AMateria("cure") {}

Cure::Cure(std::string const & type): AMateria(type)
{
}

Cure::Cure(Cure &c): AMateria(c.type) {}

Cure::~Cure() {}

Cure& Cure::operator=(const Cure& st)
{
	if (this != &st)
		this->type = st.type;
	return *this;
}

Cure* Cure::clone() const
{
	Cure* clone = new Cure();
	return(clone);
}

// void Cure::use(ICharacter& target)
// {
// 	AMateria::use(target);
// }
