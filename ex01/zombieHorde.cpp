#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string namePublic )
{
    int i = 0;
	
    Zombie *zombie = new Zombie[N];
    while(i < N)
	{
        
        zombie[i].setName(namePublic);
        zombie[i].announce();
        i++;
    }
    return (zombie);
}
