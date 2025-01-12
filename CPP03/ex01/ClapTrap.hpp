#ifndef CLAPTRAP_H
# define CLAPTRAP_H

# include <iostream>

class   ClapTrap {

protected:
    std::string _name;
    unsigned int _hitpoints;
    unsigned int _energypoints;
    unsigned int _attackdamage;

public:
    ClapTrap();
    ClapTrap(std::string name);
    ~ClapTrap();
    ClapTrap(const ClapTrap &copy);
    ClapTrap& operator=(const ClapTrap &other);

    void    attack(const std::string &target);
    void    takeDamage(unsigned int amout);
    void    beRepaired(unsigned int amout);
    unsigned int    getHitPoints() const;

};

#endif