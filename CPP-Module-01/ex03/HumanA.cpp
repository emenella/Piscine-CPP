#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon w): w(NULL), name(name)
{   
    this->w = &w;
}

HumanA::HumanA(): w(NULL), name(NULL){  }

HumanA::~HumanA()
{   
    std::cout << name << " is delete." << std::endl;
}

void    HumanA::setWeapon(Weapon &w)
{   
    this->w = &w;
}

Weapon* HumanA::getWeapon()
{
    return (w);
}

void    HumanA::attack()
{
    std::cout << "<" << name << "> " << "Attack " << w->getType() << std::endl;
}
