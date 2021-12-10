#pragma once

# include <iostream>
# include "AMateria.hpp"

class Cure : public AMateria
{
    public:
        Cure();
        ~Cure();
        Cure(std::string const &);
        Cure(Cure &c);
        Cure&   operator=(const Cure&);
        virtual Cure* clone() const;
};
