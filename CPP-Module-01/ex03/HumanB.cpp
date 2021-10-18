#include "HumanB.hpp"

HumanB::HumanB() {}
HumanB::HumanB(std::string name): name(name) {}
HumanB::~HumanB() {}

void    HumanB::setWeapon(Weapon &w)
{   
    this->w = &w;
}

Weapon* HumanB::getWeapon()
{
    return (w);
}

void    HumanB::attack()
{
    std::cout << "<" << name << "> " << "Attack " << w->getType() << std::endl;
}
