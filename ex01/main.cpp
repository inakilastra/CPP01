#include <iostream>    
#include <string>
#include <cstring>
#include "Zombie.hpp"

int main(int argc, char **argv)
{
    std::string  option; 
    bool    running = true;
    int     ioption = 0;

    if (argc == 1)
    {

    }
    else
    {  
        std::cout << "\nElige:\n\t\"./main\" para ejecutar automaticamente.n\t\"./main \"manual\"\" para ejecutar manualmente." << std::endl;
    }    
    return (0);            
}              
/*
<h3>Exercise 01: Moar brainz!</h3>

Turn-in directory : ex01/<br />
Files to turn in : Makefile, main.cpp, Zombie.{h, hpp}, Zombie.cpp, zombieHorde.cpp <br />
Forbidden functions : None<br />

¡Es hora de crear una **horda de zombis**!

Implemente la siguiente función en el archivo apropiado:

> Zombie* zombieHorde( int N, std::string name );

Debe asignar N objetos Zombie en una única asignación. Luego, tiene que inicializar los zombies, dándole a cada uno de ellos el nombre pasado como parámetro. La función devuelve un puntero al primer zombie.

Implemente sus propias pruebas para garantizar que su función zombieHorde() funcione como se esperaba.

Intenta llamar a anunciar() para cada uno de los zombies.

No olvides eliminar todos los zombies y comprobar si hay **pérdidas de memoria**.
*/