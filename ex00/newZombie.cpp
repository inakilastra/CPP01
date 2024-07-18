#include "Zombie.hpp"

Zombie *newZombie(std::string namePublic)
{
	Zombie *newZ = new Zombie(namePublic);
	newZ -> announce();
	return(newZ);
}
