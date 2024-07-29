#ifndef HumanA_HPP
# define HumanA_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanA
{
    public:
	    HumanA(std::string name, Weapon &weapon);
	    ~HumanA() {};
	    void	attack();
    private:
	    std::string name;
	    Weapon &weapon;    
};

#endif