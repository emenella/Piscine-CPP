#pragma once

# include <iostream>
# include "AMateria.hpp"

class Ice : public AMateria
{
    private:
        std::string type;

    public:
        Ice();
        ~Ice();
        Ice(std::string const &);
        Ice(Ice &c);
        Ice& operator=(const Ice&);
        virtual AMateria* clone() const;
        virtual void use(ICharacter& target);
};
