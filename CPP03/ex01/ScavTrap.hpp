#ifndef SCAVTRAP_H
# define SCAVTRAP_H

# include "ClapTrap.hpp"

class   ScavTrap : public ClapTrap {

public:
    ScavTrap();
    ~ScavTrap();
    ScavTrap(const ScavTrap &copy);
    ScavTrap& operator=(const ScavTrap &other);
    ScavTrap(std::string name);
    void    attack(const std::string &target);
    void    guardGate();
};

#endif