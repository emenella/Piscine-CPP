# include "Zombie.hpp"

Zombie::Zombie(std::string setName): name(setName){ }

Zombie::~Zombie()
{
	std::cout << "<" << name << "> " << "destroyed." << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << "<" << name << "> " << "BraiiiiiiinnnzzzZ..." << std::endl;
}
