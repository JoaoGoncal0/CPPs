#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>
# include <string>

class Zombie {

    private:
        std::string name;
    
    public:
        Zombie(std::string zombie_name);
        ~Zombie(void);
        
        void    annouce(void);
};

Zombie  *newZombie(std::string name);
void    randomChump(std::string name);

#endif