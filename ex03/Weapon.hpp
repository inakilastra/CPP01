#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <iostream>

class Weapon {
public:
    Weapon();                       // Constructor por defecto
	Weapon(std::string weapon);     // Constructor con argumento
    ~Weapon();                      // Destruir
    void setType(std::string type); // Asignar tipo de arma
    std::string getType();          // Obtener tipo de arma

private:
    std::string _type;
};

#endif

