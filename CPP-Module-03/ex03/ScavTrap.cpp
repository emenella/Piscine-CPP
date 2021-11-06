#include "ScavTrap.hpp"

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap <" << ClapTrap::name << "> have enterred in Gate keeper mode" << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
    hitPoints = 100;
    energyPoints = 50;
    attackDmg = 20;
	std::cout << "ScavTrap <" << ClapTrap::name << "> create" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap <" << ClapTrap::name << "> dead" << std::endl;
}

ScavTrap& ScavTrap::ScavTrap::operator=(const ScavTrap &st)
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

void ScavTrap::attack(std::string const & target)
{
    std::cout << "Scav Trap " << name << " attack " << target << ", causing " << attackDmg << " points of damage!" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount)
{
    ClapTrap::takeDamage(amount);
}

void ScavTrap::beRepaired(unsigned int amount)
{
    ClapTrap::beRepaired(amount);
}
