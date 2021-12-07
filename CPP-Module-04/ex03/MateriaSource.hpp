#pragma once
# include <iostream>
# include "AMateria.hpp"

class MateriaSource
{
	public:
		~MateriaSource() {}
		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);
};
