#include "Zombie.hpp"

void randomChump(std::string namePublic)
{
	Zombie Chump(namePublic);   // Creo un Zombie en un Slack (Pila)
	Chump.announce();           // Se anuncia el Zombie
}                               // Se destruye no pudiendo usarse
