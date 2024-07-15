#include "Zombie.h" 

Zombie::Zombie() {}  
const std::string& Zombie::getName() const
{
    return Name_;
}

void Zombie::setName(const std::string& Name) 
{
    Name_ = Name;
}
