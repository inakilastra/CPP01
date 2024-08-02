#include <iostream>    
#include <string>
#include <cstring>
#include "Zombie.hpp"

// Pausar la ejecución del programa y esperar 
// a que el usuario presione Enter para continuar.
void fn_continue()
{
    std::string  option;

    std::cout << "\nEnter to continue." << std::endl;
    std::getline(std::cin, option);   
}

// Verificar si una cadena de texto contiene solo números.
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
    std::string  zombieName;
    bool    running = true;
    int     ioption = 0;

    if (argc == 1) // Main Sin argumentos
    {
        int N = 4;
        std::string s = "Santiago";
        Zombie *horde = zombieHorde(N,s);
        delete[] (horde);
        return(1);
    }
    else
    {  // Main con Argumento "manual"
     if (strcmp(argv[1], "manual") == 0)
        {
            while(running)       
            {   // Menú manual
                system("clear"); // Limpio la consola 
                std::cout << "\nElige una opción:\n" << std::endl;
                std::cout << " [1] Crea tu propia horda de zombis.\n";
                std::cout << " [2] Salir." << std::endl;
                std::cout << std::endl; 
                std::getline(std::cin, option);
                // Convierto la entrada de teclado en int 
                if (isNumeric(option)) // Si es número
                    ioption = stoi(option); // Lo paso a la variable
                if (ioption == 1) // Crear horda personalizada
                {
                    std::cout << " Número de Zombies personalizado: ";
                    std::getline(std::cin, zombieName);
                     if (isNumeric(zombieName))
                        ioption = stoi(zombieName);       
                    if (ioption > 0)
                    {
                        std::cout << " Nombre Zombie personalizado: ";
                        std::getline(std::cin, zombieName);
                        Zombie *horde = zombieHorde(ioption,zombieName); // creo la horda con los argumentos dados
                        delete[] (horde); // Destruyo la horda
                        std::cout << std::endl;                                                
                    }
                }                                          
                else if (ioption == 2) // Opción 2: Salir del bucle
                    running = false;
                else  // Opción inválida seleccionada
                    std::cout << "\nLa próxima vez prueba a poner un número de la lista.\n" << std::endl;
                if (running) // Pausa para continuar
                    fn_continue();        
            }
            system("clear");
        }
        else
            std::cout << "\nElige:\n\t\"./main\" para ejecutar automaticamente.n\t\"./main \"manual\"\" para ejecutar manualmente." << std::endl;
    }    
    return (0);            
}  
