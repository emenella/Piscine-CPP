#pragma once

# include <iostream>
# include "AMateria.hpp"

class Ice : public AMateria
{
    public:
        Ice();
        ~Ice();
        Ice(std::string const &);
        Ice(Ice &c);
        Ice& operator=(const Ice&);
        Ice* clone() const;
};
