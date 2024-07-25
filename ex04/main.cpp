#include <iostream>    
#include <string>
#include <fstream>
#define DEF_COLOR "\033[0m" 
#define YELLOW    "\033[0;93m"
#define GREEN     "\033[0;92m"

std::string ft_read(char *fd)
{
	std::ifstream File;
	std::string text;
	std::string line;

	File.open(fd);
	if (!File.is_open()) 
	{
		std::cout << YELLOW << "No se puede abrir el fichero " << fd << DEF_COLOR << std::endl;
		exit(1);
	}
	else
	{
		while (!File.eof())
		{
			std::getline(File, line);
			text += line;
			text += '\n';
		}
	}
	File.close();
	return (text);
}

std::string ft_replace_str(std::string text, std::string s1, std::string s2, int show)
{
	int			i;
	std::size_t pos;

	i = 0;
	pos = 0;
	while ((pos = text.find(s1,pos)) != std::string::npos)
	{
		text.erase(pos, s1.length());
		text.insert(pos, s2);
		pos += s2.length(); 
		i++;
	}
	if (i > 0 && show == 1)
	{
		std::cout << GREEN << "He cambiado " << i << " veces \"" << s1 << "\" por \"" << s2 << "\"" << DEF_COLOR << std::endl;
	}
	return (text);
}

int main(int argc, char **argv)
{
	std::string text;
	std::ofstream newfile;

	if (argc != 4)
	{
		std::cout << YELLOW << "Número de argumentos incorrecto (prueba a poner 4)" << DEF_COLOR << std::endl;
		return (0);
	}
    else if (!argv[1][0] || !argv[2][0])
	{
		std::cout << YELLOW << "No puede estar vacio el argumento 1 y/o 2" << DEF_COLOR << std::endl;
		return (0);
	}
	if (ft_read(argv[1]) != ft_replace_str(ft_read(argv[1]), argv[2], argv[3], 0))
	{
		newfile.open(argv[1] + std::string(".replace"));
		if (!newfile.is_open())
		{
			std::cout << "Failed to open the file" << std::endl;
			exit(1);
		}
		newfile << ft_replace_str(ft_read(argv[1]), argv[2], argv[3], 1);
		newfile.close();
	}
	else
	{
		std::cout << YELLOW << "no crear nuevo fichero" << DEF_COLOR << std::endl;
	}
	return (0);
}
