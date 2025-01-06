#ifndef HUMANB_H
# define HUMANB_H

# include "Weapon.hpp"

class   HumanB {

    private:
        std::string name;
        Weapon *weapon;
        bool    isArmed;
    
    public:
        HumanB(std::string name);
        ~HumanB(void);

        void    setWeapon(Weapon &weapon);
        void    attack();
};

#endif