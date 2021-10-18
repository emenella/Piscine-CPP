#ifndef HUMANB_HPP
# define HUMANB_HPP
# include <iostream>
# include "Weapon.hpp"

class HumanB
{
 private:
    Weapon      *w;
    std::string name;

 public:
    HumanB();
    HumanB(std::string name);
    ~HumanB();

    void        setWeapon(Weapon &w);
    Weapon*     getWeapon();
    void        attack();
};

#endif
