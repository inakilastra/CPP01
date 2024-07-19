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
        // getter
	    std::string getName();
        // setter
	    void    setName(std::string namePublic);
        void    announce(void);

    private:
        std::string namePrivate;
};
    Zombie* newZombie(std::string namePublic);
	void randomChump(std::string namePublic);
#endif
