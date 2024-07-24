#include "Weapon.hpp"

Weapon::Weapon(void)
{
	this->_type = "Undefined type Weapon";
	std::cout << " " <<  this->_type << " created" << std::endl;
}

Weapon::Weapon(std::string weapon): _type(weapon)
{
	std::cout << " " <<  this->_type << " type weapon created" << std::endl;
}

Weapon::~Weapon(void)
{
	std::cout << " " << _type << " destroyed" << std::endl;
}

void	Weapon::setType(std::string newtype)
{
	this->_type = newtype;
}

std::string	Weapon::getType(void)
{
	return (this->_type);
}

