#include "HumanB.hpp"

HumanB::HumanB(): w(NULL) {}
HumanB::HumanB(std::string name): name(name) {}

HumanB::~HumanB()
{
    std::cout << name << " is delete." << std::endl;
}

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
