#pragma once

# include <iostream>
# include "AMateria.hpp"

class Cure : public AMateria
{
    private:
        std::string type;

    public:
        Cure();
        ~Cure();
        Cure(std::string const &);
        Cure(Cure &c);
        Cure&   operator=(const Cure&);
        virtual AMateria* clone() const;
        virtual void use(ICharacter& target);
};
