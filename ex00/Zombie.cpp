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
    std::cout << " " << namePrivate << ": BraiiiiiiinnnzzzZ...\n" << std::endl;
}
std::string Zombie::getName()
{
	return this->namePrivate;
}
void Zombie::setName(std::string namePublic)
{
	namePrivate = namePublic;
}
