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
    std::string  zombieName;
    bool    running = true;
    int     ioption = 0;

    if (argc == 1)
    {
        int N = 4;
        std::string s = "Santiago";
        Zombie *horde = zombieHorde(N,s);
        delete[] (horde);
        return(1);
    }
    else
    {  
     if (strcmp(argv[1], "manual") == 0)
        {
            while(running)       
            {   
                system("clear");
                std::cout << "\nElige una opción:\n" << std::endl;
                std::cout << " [1] Crea tu propia horda de zombis.\n";
                std::cout << " [2] Salir." << std::endl;
                std::cout << std::endl; 
                std::getline(std::cin, option);

                if (isNumeric(option)) 
                    ioption = stoi(option); 
                if (ioption == 1)
                {
                    std::cout << " Número de Zombies personalizado: ";
                    std::getline(std::cin, zombieName);
                     if (isNumeric(zombieName))
                        ioption = stoi(zombieName);       
                    if (ioption > 0)
                    {
                        std::cout << " Nombre Zombie personalizado: ";
                        std::getline(std::cin, zombieName);
                        Zombie *horde = zombieHorde(ioption,zombieName); 
                        delete[] (horde); 
                        std::cout << std::endl;                                                
                    }
                }                                          
                else if (ioption == 2) 
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
