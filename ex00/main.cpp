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

int main(int argc, char **argv)
{
    std::string  option; 
    bool    running = true;
    int     ioption = 0;

    if (argc == 1)
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
    }
    else
    {
        if (strcmp(argv[1], "manual") == 0)
        {
            while(running)       
            {
                system("clear");
                std::cout << "\nElige una opción:\n" << std::endl;
                std::cout << " [1] Crea tu propio zombi sin nombre.\n";
                std::cout << " [2] Crea tu propio zombi.\n";
                std::cout << " [3] Crea tu propio zombi en Stack.\n";
                std::cout << " [4] Salir." << std::endl;
                std::getline(std::cin, option);

                if (isNumeric(option))
                    ioption = stoi(option);       
                if (ioption == 1)
                {
                    Zombie one;
                    std::cout << " Zombie se llama " << one.getName() << std::endl;
                    one.announce();
                    std::cout << " dirección de memoria: " << &one << std::endl;
                    std::cout << std::endl;                                                
                }              
                else if (ioption == 2)
                {
                    std::cout << " Nombre Zombie personalizado: ";
                    std::getline(std::cin, option);
                    Zombie one(option);
                    std::cout << " Zombie dos se llama " << one.getName() << std::endl;
                    one.announce();
                    std::cout << " dirección de memoria: " << &one << std::endl;
                    std::cout << std::endl;                                                
                }    
                else if (ioption == 3)
                {
                    std::cout << " Nombre Zombie personalizado: ";
                    std::getline(std::cin, option);
                    randomChump(option);                                                
                }                              
                else if (ioption == 4)
                    running = false;
                else
                    std::cout << "\nLa próxima vez prueba a poner un número de la lista.\n" << std::endl;
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
#include <iostream>    
#include <string>
#include <cstring>
#include "Zombie.hpp"

void fn_continue()  // Para detner el proceso antes de limpiar la pantalla
{
    std::string  option;

    std::cout << "\nEnter to continue." << std::endl;
    std::getline(std::cin, option);   
}

bool isNumeric(const std::string& str) // Comprobar que el string es un número
{
  size_t i = 0;

  while (i < str.length())
    if (!isdigit(str[i++]))
      return false;
  return true;
}

int main(int argc, char **argv)
{
    std::string  option; 
    bool    running = true;
    int     ioption = 0;

    if (argc == 1) // Si no tiene argumentos ejecuto automaticamente
    {
        std::cout << std::endl;

        Zombie uno; // Creo un Zombie sin nombre (zombie uno)
        std::cout << " Zombie uno se llama " << uno.getName() << std::endl;
        uno.announce();
        std::cout << " dirección de memoria: " << &uno << std::endl;
        std::cout << std::endl;
        Zombie dos("Michael"); // Creo un Zombie llamado Mivhael (zombie dos)
        std::cout << " Zombie dos se llama " << dos.getName() << std::endl;
        dos.announce();
        std::cout << " dirección de memoria: " << &dos << std::endl;
        std::cout << std::endl;
        Zombie tres(uno); // Creo un Zombie clonando el uno (zombie tres)
        std::cout << " > Zombie tres(uno) " << std::endl;
        std::cout << " Zombie tres se llama  " << tres.getName() << std::endl;
        tres.announce();
        std::cout << " dirección de memoria: " << &tres << std::endl;
        std::cout << std::endl;
        tres = dos; // Clono el dos (zombie tres)
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
    }
    else
    {
        if (strcmp(argv[1], "manual") == 0)
        {
            while(running)       
            {
                system("clear");
                std::cout << "\nElige una opción:\n" << std::endl;
                std::cout << " [1] Crea tu propio zombi sin nombre.\n";
                std::cout << " [2] Crea tu propio zombi.\n";
                std::cout << " [3] Crea tu propio zombi en Stack.\n";
                std::cout << " [4] Salir." << std::endl;
                std::getline(std::cin, option);

                if (isNumeric(option))
                    ioption = stoi(option);       
                if (ioption == 1)
                {
                    Zombie one;
                    std::cout << " Zombie se llama " << one.getName() << std::endl;
                    one.announce();
                    std::cout << " dirección de memoria: " << &one << std::endl;
                    std::cout << std::endl;                                                
                }              
                else if (ioption == 2)
                {
                    std::cout << " Nombre Zombie personalizado: ";
                    std::getline(std::cin, option);
                    Zombie one(option);
                    std::cout << " Zombie dos se llama " << one.getName() << std::endl;
                    one.announce();
                    std::cout << " dirección de memoria: " << &one << std::endl;
                    std::cout << std::endl;                                                
                }    
                else if (ioption == 3)
                {
                    std::cout << " Nombre Zombie personalizado: ";
                    std::getline(std::cin, option);
                    randomChump(option);                                                
                }                              
                else if (ioption == 4)
                    running = false;
                else
                    std::cout << "\nLa próxima vez prueba a poner un número de la lista.\n" << std::endl;
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
*/