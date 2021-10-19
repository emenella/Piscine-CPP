# include "Zombie.hpp"

int main()
{
	Zombie *zombieHeap = newZombie("Steve");
    zombieHeap->announce();
	randomChump("Ugo");
    delete zombieHeap;
    return(0);
}
