#ifndef WEAPON_H
# define WEAPON_H

# include <iostream>
# include <string>

class   Weapon {
    
    private:
        std::string type;

    public:
        Weapon(const std::string &weapon);
        ~Weapon(void);

        void    setType(const std::string &weapon);
        std::string getType() const;
};

#endif