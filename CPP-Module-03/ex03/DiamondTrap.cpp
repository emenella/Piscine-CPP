#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name)
{
	this->name = name;
	hitPoints = FragTrap::hitPoints;
	energyPoints = ScavTrap::energyPoints;
	attackDmg = FragTrap::attackDmg;
	std::cout << "DiamondTrap <" << name << "> create" << std::endl;
}

DiamondTrap::~DiamondTrap() 
{
	std::cout << "DiamondTrap <" << name << "> dead" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &st)
{
	if (this != &st)
	{
		this->name = st.name;
		this->hitPoints = st.hitPoints;
		this->energyPoints = st.energyPoints;
		this->attackDmg = st.attackDmg;
	}
	return *this;
}

void DiamondTrap::whoAmI()
{
	std::cout << "I'm " << name << " and my ClapTrap is " << ClapTrap::name << std::endl;
}
