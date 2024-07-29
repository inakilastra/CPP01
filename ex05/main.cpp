#include <iostream>
#include <string>
#include <fstream>

#include "Harl.hpp"

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

int main(void)
{
	Harl harl;

    std::string  option; 
    bool    running = true;
    int     ioption = 0;

    while(running)       
    {   
        system("clear");
        std::cout << "\nElige una opción:\n" << std::endl;
        std::cout << " [1] DEBUG\n";
        std::cout << " [2] INFO\n";
        std::cout << " [3] WARNING\n";
        std::cout << " [4] ERROR\n";
        std::cout << " [5] Salir." << std::endl;
        std::cout << std::endl; 
        std::getline(std::cin, option);

        if (isNumeric(option)) 
            ioption = stoi(option); 
        if (ioption >= 1 && ioption <= 4)
        {
            switch (ioption)
            {
                case 1:
                    std::cout << "DEBUG:\n";
                    harl.complain("DEBUG");
                    break;
                case 2:
                    std::cout << "INFO:\n";
                    harl.complain("INFO");
                    break;
                case 3:
                    std::cout << "WARNING:\n";
                    harl.complain("WARNING");
                    break;
                case 4:
                    std::cout << "ERROR:\n";
                    harl.complain("ERROR");
                    break;
                default:
                    break;
            }
        }
        else if (ioption == 5) 
            running = false;
        else 
            std::cout << "\nLa próxima vez prueba a poner un número de la lista.\n" << std::endl;
        if (running) 
            fn_continue();        
    }
    system("clear");        
	return (0);
}
