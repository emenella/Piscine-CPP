#pragma once
# include <iostream>

class Zombie
{
	private:
		std::string name;

	public:
		Zombie();
		Zombie(std::string setName);
		~Zombie();
		void setName(std::string setName);
		void announce(void);
};

Zombie* zombieHorde( int N, std::string name );
