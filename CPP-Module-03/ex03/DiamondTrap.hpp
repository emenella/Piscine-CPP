#pragma once

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
	private:
		std::string		name;
	
	public:
		DiamondTrap();
		~DiamondTrap();
		DiamondTrap(std::string name);
		DiamondTrap& operator=(const DiamondTrap &);
		using ScavTrap::attack;
		void whoAmI();
};
