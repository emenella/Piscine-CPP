#include "ScavTrap.hpp"

int main()
{
	ScavTrap cp0("One");
	ScavTrap cp1("Two");
	ScavTrap cp2("");

	cp0.attack("Two");
	cp1.attack("One");
	cp0.takeDamage(5);
	cp1.takeDamage(5);
	cp0.takeDamage(3);
	cp0.beRepaired(6);
	cp1.takeDamage(6);
	cp1.takeDamage(1);
	cp0.beRepaired(6);
}
