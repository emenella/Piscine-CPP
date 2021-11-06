#include "FragTrap.hpp"

void	FragTrap::highFivesGuys()
{
	std::cout << "HIGH FIVE" << std::endl << "CLAP !" << std::endl << "CLAP !";
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	std::cout << "FragTrap <" << this->name << "> is constructed" << std::endl;
    hitPoints = 100;
    energyPoints = 100;
    attackDmg = 30;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap <" << this->name << "> is destruct" << std::endl;
}

FragTrap& FragTrap::FragTrap::operator=(const FragTrap &st)
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

void FragTrap::attack(std::string const & target)
{
    std::cout << "Scav Trap " << name << " attack " << target << ", causing " << attackDmg << " points of damage!" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount)
{
    ClapTrap::takeDamage(amount);
}

void FragTrap::beRepaired(unsigned int amount)
{
    ClapTrap::beRepaired(amount);
}
