#include <iostream>    
#include <string>
#include <cstring>
#include "Zombie.hpp"

void fn_continue()
{
    std::string  option;

    std::cout << "\nEnter to continue." << std::endl;
    std::getline(std::cin, option);   
}

bool isNumeric(const std::string& str)
{
  size_t i = 0;

  while (i < str.length())
    if (!isdigit(str[i++]))
      return false;
  return true;
}

void ft_zombie(const std::string& newZombie)
{
    Zombie one(newZombie);
    std::cout << "01 Zombie one is " << one.getName() << std::endl;
    one.announce();
}

int main(int argc, char **argv)
{
    std::string  option; 
    bool    running = true;
    int     ioption = 0;

    if (argc == 1)
    {
        Zombie one;
        std::cout << "Zombie one name is " << one.getName() << std::endl;
        one.announce();
        Zombie two;
        std::cout << "Zombie two name is " << two.getName() << std::endl;
        two.announce();
    }
    else
    {
        if (strcmp(argv[1], "manual") == 0)
        {
            while(running)       
            {
                system("clear");
                std::cout << "\nElige una opción:\n" << std::endl;
                std::cout << " [1] Crea tu propio zombi.\n";
                std::cout << " [4] Salir." << std::endl;
                std::getline(std::cin, option);

                if (isNumeric(option))
                    ioption = stoi(option);       
                switch(ioption)
                {
                    case 1:
                        std::cout << "Name: ";
                        std::getline(std::cin, option);
                        ft_zombie(option);
                        break;
                    case 4:
                        running = false;
                        break;
                    default:
                        std::cout << "\nLa próxima vez prueba a poner un número de la lista.\n" << std::endl;
                }
                if (running)
                    fn_continue();        
            }
            system("clear");
        }
        else
            std::cout << "\nElige:\n\t\"./main\" para ejecutar automaticamente.n\t\"./main \"manual\"\" para ejecutar manualmente." << std::endl;
    }
    return (0);            
} 


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