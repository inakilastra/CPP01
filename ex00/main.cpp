#include <iostream>    
#include <string>
#include "Zombie.hpp"

int main(void)
{
    std::cout << std::endl;

    Zombie uno;
    std::cout << " Zombie uno se llama " << uno.getName() << std::endl;
    uno.announce();

    Zombie dos("Michael");
    std::cout << " Zombie dos se llama " << dos.getName() << std::endl;
    dos.announce();

    Zombie tres(uno);
    std::cout << std::endl << " Zombie tres se llama  " << tres.getName() << std::endl;
    tres.announce();

    tres = dos;
    std::cout << std::endl << " Zombie tres se llama  " << tres.getName() << std::endl;
    tres.announce();

    Zombie	*cuatro;
    cuatro = newZombie("SATAN");
    std::cout << std::endl << " Zombie cuatro se llama  " << cuatro << std::endl;

    std::cout << std::endl;    
    return (0);            
} 
/*

	std::cout << "memory direction of a is:" << &a << std::endl;
	std::cout << "memory direction of b is:" << &b << std::endl;
	std::cout << "memory direction of c is:" << &c << std::endl;

	Zombie	*d = NULL;
	std::cout << "memory direction of d is:" << d << std::endl;
	d = newZombie("PACO");
	std::cout << "memory direction of d is:" << d << std::endl;
	Zombie *e = NULL;
	std::cout << "memory direction of e is:" << e << std::endl;
	e = d;
	std::cout << "memory direction of e is:" << e << std::endl;
	d->announce();
	e->announce();
	randomChump("randomChump");	
	

	delete d;
*/

/*
Ex00: BraiiiiiiinnnzzzZ
El objetivo de este ejercicio es comprender cómo asignar memoria en C++.

Makefile y pruebas

Zombie Class

newZombie

Hay una función newZombie() cuyo prototipo es: [ Zombie* newZombie( std::string name ); ] 
Debería asignar un zombi al montón y devolverlo. 
Idealmente, debería llamar al constructor que toma un string e inicializa el nombre. 
El ejercicio debe marcarse como correcto si el Zombie puede anunciarse con el nombre pasado a la función. 
Hay pruebas para demostrar que todo funciona. 
El zombie se elimina correctamente antes de que finalice el programa.

randomChump

Hay una función randomChump() cuyo prototipo es: [ void randomChump( std::string name ); ] 
Debería crear un zombi en la pila y hacer que se anuncie. 
Lo ideal sería que el zombie se ubicara en la pila (por lo que se eliminaría implícitamente al final de la función). 
También se puede asignar en el montón y luego eliminarlo explícitamente. 
El estudiante debe justificar sus elecciones. 
Hay pruebas para demostrar que todo funciona.
*/