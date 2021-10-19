#ifndef HUMANA_HPP
# define HUMANA_HPP
# include <iostream>
# include "Weapon.hpp"

class HumanA
{
 private:
    Weapon      &w;
    std::string name;

 public:
    HumanA(std::string name, Weapon &w);
    HumanA();
    ~HumanA();
    void          setWeapon(Weapon &w);
    Weapon        getWeapon();
    void          attack();
};

#endif