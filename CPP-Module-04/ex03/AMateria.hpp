#pragma once

class ICharacter;

# include <iostream>

class AMateria
{
    protected:
        std::string type;

    public:
        AMateria();
        AMateria(std::string const & type);
        AMateria(AMateria &c);
        virtual ~AMateria();
        AMateria& operator=(const AMateria&);

        std::string const & getType() const;
        virtual AMateria* clone();
        virtual void use(ICharacter& target);
};
