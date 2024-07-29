#include "Harl.hpp"

Harl::Harl()
{
    std::cout << "Harl constructor" << std::endl;
}
Harl::~Harl()
{
    std::cout << "Harl destructor" << std::endl;
}
void Harl::complain( std::string level )
{
	std::string	option[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void		(Harl::*complainPTR[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	int i =0;
	while (i < 4)
	{
		if (level == option[i])
		{
			(this->*complainPTR[i])();
			return ;
		}
		i++;
	}
	std::cout << "Entrada incorrecta" << std::endl;
}
void Harl::debug()
{
	std::cout << "Me encanta tener tocino adicional para mi hamburguesa 7XL con doble queso, triple pepinillos y ketchup especial. ¡De verdad que me encanta!\n";
}
void Harl::info()
{
	std::cout << "No puedo creer que agregar tocino adicional cueste más dinero. ¡No pusiste suficiente tocino en mi hamburguesa! Si lo hubieras hecho, ¡no estaría pidiendo más!\n";
}
void Harl::warning()
{
	std::cout << "Creo que merezco tener un poco de tocino adicional gratis. He estado viniendo durante años, mientras que tú comenzaste a trabajar aquí desde el mes pasado\n";
}
void Harl::error()
{
	std::cout << "¡Esto es inaceptable! Quiero hablar con el gerente ahora.\n";
}