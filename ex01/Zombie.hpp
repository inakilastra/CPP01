#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>
# include <string>

class Zombie
{
    public:
        Zombie();
        Zombie(std::string namePublic);
        ~Zombie();
	    void    setName(std::string namePublic);
        void    announce(void);

    private:
        std::string namePrivate;
};

#endif