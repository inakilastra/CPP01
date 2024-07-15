#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
    public:
    Zombie();
    const std::string& getName() const;
    void setName(const std::string& namePublic);
    Zombie(const std::string& namePublic);
     
    void zombieAdd(std::string namePublic)
    { 
        namePrivate = namePublic;
        std::cout << namePublic << " is born!" << std::endl;
        announce();
    }
    void announce(void)
    {
        std::cout << namePrivate << ": BraiiiiiiinnnzzzZ..." << std::endl;
    }

    private:
    std::string namePrivate;
};

#endif

/*

Tiene al menos un constructor. 
Tiene una función miembro anunciar (void) que imprime: ": BraiiiiiiinnnzzzZ..." 
El destructor imprime un mensaje de depuración que incluye el nombre del zombie.
*/
