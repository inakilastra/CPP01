#include <iostream>
#include <string>
#include <fstream>

#include "Harl.hpp"


int main(int argc, char **argv)
{
	Harl harl;

	if (argc != 2)
	{
		std::cout << "Es oblicatorio 2 argumentos" << std::endl;
		return (0);
	}
    harl.complain(argv[1]);
       
	return (0);
}
