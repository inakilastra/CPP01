#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>
# include <string>

class Zombie
{
    public:
        Zombie();
        Zombie(std::string namePublic);
        ~Zombie();
        // getter
	    std::string getName();
        // setter
	    void    setName(std::string namePublic);
        void    announce(void);

    private:
        std::string namePrivate;
};
    Zombie* newZombie(std::string namePublic);
	void randomChump(std::string namePublic);
#endif

/*

Zombie Class
void randomChump( std::string name );
Crea un zombie, le pones un nombre y el zombie se anuncia.

Ahora bien, ¿cuál es el objetivo real del ejercicio? 
Tienes que determinar en qué caso es mejor asignar los zombies en la pila o en el montón.

*/