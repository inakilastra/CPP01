#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>
# include <string>

class Zombie
{
    public:
        Zombie();                               // Constructor
        Zombie(std::string namePublic);         
        ~Zombie();                              // Destructor
        // getter
	    std::string getName();                  // Obtener nombre Privado
        // setter
	    void    setName(std::string namePublic);// Guardar nombre 
        void    announce(void);                 // Anunciar zombie

    private:
        std::string namePrivate;
};
    Zombie* newZombie(std::string namePublic);  // Crear Zombie en puntero
	void randomChump(std::string namePublic);   // crear Zombie en Slack
#endif
