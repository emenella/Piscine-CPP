#include "MateriaSource.hpp"

MateriaSource::MateriaSource(): tab(), index(0), typeObjet() {}

MateriaSource::~MateriaSource() {}

void MateriaSource::learnMateria(AMateria* materia) 
{
	for(int i = 0; i < NB_MATERIAL; i++)
		if (tab[i] == NULL)
		{
			tab[i] = materia;
			typeObjet[i] = materia->getType();
			return ;
		}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for(int i = 0; i < NB_MATERIAL; i++) 
		if (typeObjet[i] == type)
			return(tab[i]->clone());
	return (0);
}
