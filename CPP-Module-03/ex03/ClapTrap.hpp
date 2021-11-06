#pragma once

#include <iostream>

class ClapTrap
{
	protected:
		std::string		name;
		int				hitPoints;
		unsigned int	energyPoints;
		unsigned int	attackDmg;

	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &ct);
		virtual ~ClapTrap();
		ClapTrap& operator=(const ClapTrap &);
		void attack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};
