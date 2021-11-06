#pragma once

#include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap
{
	public:
        ScavTrap();
        ScavTrap(std::string name);
        ~ScavTrap();
		void guardGate();
        ScavTrap& operator=(const ScavTrap &);
        virtual void attack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

};