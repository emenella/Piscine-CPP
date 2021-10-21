# include "Zombie.hpp"

Zombie::Zombie(std::string setName): name(setName){ }

Zombie::Zombie(){ }

Zombie::~Zombie()
{
	std::cout << "<" << name << "> " << "destroyed." << std::endl;
}

void	Zombie::setName(std::string setName) { name = setName; }

void	Zombie::announce(void)
{
	std::cout << "<" << name << "> " << "BraiiiiiiinnnzzzZ..." << std::endl;
}
