#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap cp0("One");
	DiamondTrap cp1("Two");
	DiamondTrap cp2("");

	cp0.whoAmI();
	cp1.whoAmI();
	cp2.whoAmI();
	cp0.attack("Two");
	cp1.attack("One");
	cp0.whoAmI();
	cp1.whoAmI();
	cp2.whoAmI();
}
