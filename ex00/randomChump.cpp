#include "Zombie.hpp"

void randomChump(std::string namePublic)
{
	Zombie Chump(namePublic);
	Chump.announce();
}
