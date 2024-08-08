#include "Zombie.hpp" 

Zombie::Zombie() : namePrivate("Unknown") 
{  
    std::cout << " " <<  this->namePrivate << " zombie creado" << std::endl;
}
Zombie::Zombie(std::string namePublic)
{
	setName(namePublic);
	std::cout << " " << namePrivate << " zombie creado" << std::endl;
}
void Zombie::announce(void)
{
    std::cout << " " << namePrivate << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
Zombie::~Zombie(void)
{
	std::cout << " " << namePrivate << " destruido" << std::endl;
}
std::string Zombie::getName()
{
	return this->namePrivate;
}
void Zombie::setName(std::string namePublic)
{
	namePrivate = namePublic;
}

/*
#include "Zombie.hpp" 
// Crea un Zombie, se le asigna "Unknown" como nombre ya que no se especifico
Zombie::Zombie() : namePrivate("Unknown") 
{  
    std::cout << " " <<  this->namePrivate << " zombie creado" << std::endl;
}
// Crea un Zombie, se le asigna el nombre que se indica
Zombie::Zombie(std::string namePublic)
{
	setName(namePublic);
	std::cout << " " << namePrivate << " zombie creado" << std::endl;
}
// Se anuncia el Zommbie
void Zombie::announce(void)
{
    std::cout << " " << namePrivate << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
// Cuando el Zombie se destruye
Zombie::~Zombie(void)
{
	std::cout << " " << namePrivate << " destruido" << std::endl;
}
// Obtener el nombre del Zomibe
std::string Zombie::getName()
{
	return this->namePrivate;
}
// Guardar el nombre del Zomibe
void Zombie::setName(std::string namePublic)
{
	namePrivate = namePublic;
}
*/