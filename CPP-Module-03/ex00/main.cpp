#include "ClapTrap.hpp"

int main()
{
	ClapTrap cp0("One");
	ClapTrap cp1("Two");
	ClapTrap cp2("");

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
