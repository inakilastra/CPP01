#include "Zombie.hpp"

Zombie *newZombie(std::string namePublic)
{   
	Zombie *newZ = new Zombie(namePublic);  // Creo un Zombie en un puntero
	newZ -> announce();                     // Se anuncia el Zombie
	return(newZ);                           // Se devuelve el Zombie para su uso
}                                           // sera destruido al salir del programa
