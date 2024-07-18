#include <iostream>    
#include <string>
#include "Zombie.hpp"

int main(void)
{
    std::cout << std::endl;

    Zombie uno;
    std::cout << " Zombie uno se llama " << uno.getName() << std::endl;
    uno.announce();
    std::cout << " dirección de memoria: " << &uno << std::endl;
    std::cout << std::endl;
    Zombie dos("Michael");
    std::cout << " Zombie dos se llama " << dos.getName() << std::endl;
    dos.announce();
    std::cout << " dirección de memoria: " << &dos << std::endl;
    std::cout << std::endl;
    Zombie tres(uno);
    std::cout << " > Zombie tres(uno) " << std::endl;
    std::cout << " Zombie tres se llama  " << tres.getName() << std::endl;
    tres.announce();
    std::cout << " dirección de memoria: " << &tres << std::endl;
    std::cout << std::endl;
    tres = dos;
    std::cout << " > tres = dos " << std::endl;
    std::cout << " Zombie tres se llama  " << tres.getName() << std::endl;
    tres.announce();
    std::cout << " dirección de memoria: " << &tres << std::endl;
    std::cout << std::endl;
    Zombie	*cuatro;
    cuatro = newZombie("SATAN");
    std::cout << " Zombie cuatro se llama  " << cuatro->getName() << std::endl;
    std::cout << " dirección de memoria: " << &cuatro << std::endl;
    std::cout << std::endl;
    Zombie cinco(*cuatro);
    std::cout << " > Zombie cinco(*cuatro) " << std::endl;
    std::cout << " Zombie cinco se llama  " << cinco.getName() << std::endl;
    cinco.announce();   
    std::cout << " dirección de memoria: " << &cinco << std::endl;
    std::cout << std::endl;
    std::cout << " > Destruyo de manera manual al Zombie cuatro" << std::endl;
    delete cuatro; 
    std::cout << std::endl;
    std::cout << " > Creo un Zombie en la pila que se autodestruye" << std::endl;
    randomChump("inStack");
    std::cout << "\n > El resto de Zombies se autodestruyen al salir" << std::endl;
    return (0);            
} 

