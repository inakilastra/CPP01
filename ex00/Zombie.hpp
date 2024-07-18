#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>
# include <string>

class Zombie
{
    public:
        Zombie();
        Zombie(std::string namePublic);
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
Zombie* nuevoZombie( std::string name );
Crea un zombie, le pone un nombre y lo devuelve para que puedas usarlo fuera de la función alcance.

void randomChump( std::string name );
Crea un zombie, le pones un nombre y el zombie se anuncia.

Ahora bien, ¿cuál es el objetivo real del ejercicio? Tienes que determinar en qué caso es mejor asignar los zombies en la pila o en el montón.

Los zombis deben ser destruidos cuando ya no los necesites. El destructor debe imprimir un mensaje con el nombre del zombie para fines de depuración.
El destructor imprime un mensaje de depuración que incluye el nombre del zombie.

*/