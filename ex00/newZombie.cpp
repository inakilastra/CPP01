#include "Zombie.hpp"

Zombie *newZombie(std::string namePublic)
{
	Zombie *nZ = new Zombie(namePublic);
	nZ -> announce();
	return(nZ);
}
