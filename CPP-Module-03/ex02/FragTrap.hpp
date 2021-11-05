#pragma once

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
        FragTrap();
        FragTrap(std::string name);
        ~FragTrap();
		void highFivesGuys();
        FragTrap& operator=(const FragTrap &);
        void attack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

};