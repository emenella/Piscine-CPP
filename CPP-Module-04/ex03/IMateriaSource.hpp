#pragma once
# include <iostream>
# include "AMateria.hpp"
# define NB_MATERIAL 4

class IMateriaSource
{
	public:
		virtual ~IMateriaSource() {}
		virtual void learnMateria(AMateria*) = 0;
		virtual AMateria* createMateria(std::string const & type) = 0;
};
