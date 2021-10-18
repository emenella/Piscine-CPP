#pragma once
# include <iostream>

class Weapon
{
	private:
		std::string weaponType;

	public:
		std::string	const &getType();
		void				setType(std::string newType);
		Weapon();
		Weapon(std::string str);
		~Weapon();
};