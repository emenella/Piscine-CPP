#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &w): w(w), name(name){  }

HumanA::~HumanA()
{
    std::cout << name << " is delete." << std::endl;
}

void    HumanA::setWeapon(Weapon &w)
{   
    this->w = w;
}

Weapon HumanA::getWeapon()
{
    return (w);
}

void    HumanA::attack()
{
    std::cout << "<" << name << "> " << "Attack " << w.getType() << std::endl;
}
