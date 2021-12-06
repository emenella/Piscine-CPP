#pragma once

# include <iostream>
# include "ICharacter.hpp"

class AMateria
{
    protected:
        std::string type;

    public:
        AMateria();
        AMateria(std::string const & type);
        ~AMateria();
        AMateria& operator=(const AMateria&);

        std::string const & getType() const;
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};