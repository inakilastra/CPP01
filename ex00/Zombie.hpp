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

#endif

/*

Zombie Class

El destructor imprime un mensaje de depuración que incluye el nombre del zombie.

*/