#include "Harl.hpp"

Harl::Harl()
{
    std::cout << "Harl constructor\n" << std::endl;
}
Harl::~Harl()
{
    std::cout << "Harl destructor\n" << std::endl;
}
void Harl::complain( std::string level )
{
	void		(Harl::*complainPTR[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string	option[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int i = 0;
	int j = 5;
	while (i < 4)
	{
		if (level == option[i])
		{
			j = i;
		}
		i++;
	}
	while (j < 4)
	{
		(this->*complainPTR[j])();
		j++;
	}
	if (j != 4)
		std::cout << "[ Probablemente se esté quejando de problemas insignificantes ]" << std::endl;
}
void Harl::debug()
{
	std::cout << "Me encanta tener tocino adicional para mi hamburguesa 7XL con doble queso, triple pepinillos y ketchup especial. ¡De verdad que me encanta!\n\n";
}
void Harl::info()
{
	std::cout << "No puedo creer que agregar tocino adicional cueste más dinero. ¡No pusiste suficiente tocino en mi hamburguesa! Si lo hubieras hecho, ¡no estaría pidiendo más!\n\n";
}
void Harl::warning()
{
	std::cout << "Creo que merezco tener un poco de tocino adicional gratis. He estado viniendo durante años, mientras que tú comenzaste a trabajar aquí desde el mes pasado\n\n";
}
void Harl::error()
{
	std::cout << "¡Esto es inaceptable! Quiero hablar con el gerente ahora.\n\n";
}