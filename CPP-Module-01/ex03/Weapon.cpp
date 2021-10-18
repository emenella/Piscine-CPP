#include "Weapon.hpp"

std::string	const &	Weapon::getType() { return (weaponType); }
void				Weapon::setType(std::string newType) { weaponType = newType; }

Weapon::Weapon(){}
Weapon::Weapon(std::string weapon) { weaponType = weapon; }
Weapon::~Weapon() {}
