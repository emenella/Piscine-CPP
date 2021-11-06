#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): name(""), hitPoints(10), energyPoints(10), attackDmg(0)
{
	std::cout << "ClapTrap <" << name << "> create" << std::endl;
}

ClapTrap::ClapTrap(std::string name): name(name), hitPoints(10), energyPoints(10), attackDmg(0)
{
	std::cout << "ClapTrap <" << name << "> create" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap "<< "<" << name << "> dead" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &ct)
{
	if (this != (ClapTrap*)&ct)
	{
		this->name = ct.name;
		this->hitPoints = ct.hitPoints;
		this->energyPoints = ct.energyPoints;
		this->attackDmg = ct.attackDmg;
	}
	return *this;
}

ClapTrap::ClapTrap(const ClapTrap &ct): hitPoints(ct.hitPoints), energyPoints(ct.energyPoints), attackDmg(ct.attackDmg) {}

void ClapTrap::attack(std::string const & target)
{
	std::cout << "Clap Trap " << name << " attack " << target << ", causing " << attackDmg << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (hitPoints > 0 && hitPoints - (int)amount <= 0)
		std::cout << "<" << name << "> killed" << std::endl;
	else if (hitPoints > 0)
		std::cout << name << ": -" << amount << "HP | Total : " << hitPoints << std::endl;
	hitPoints -= (int)amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (hitPoints)
	{
		hitPoints += amount;
		std::cout << name << ": +" << amount << "HP | Total : " << hitPoints << std::endl;
	}
	else
		std::cout << "<" << name << "> dead, can't be repared !" << std::endl;
}
