# include "Zombie.hpp"
# define NB 5

int main()
{
	Zombie *zombies = zombieHorde(NB, "Random");
	for (int i = 0; i < NB; i++)
		zombies[i].announce();
	delete []zombies;
	return (0);
}