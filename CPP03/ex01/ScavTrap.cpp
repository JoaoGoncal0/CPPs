#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap() {
    _hitpoints = 100;
    _energypoints = 50;
    _attackdamage = 20;
    _name = "Empty";
    std::cout << "Default constructor called for ScavTrap "
    << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name) {
    _hitpoints = 100;
    _energypoints = 50;
    _attackdamage = 20;
    std::cout << "Name constructor called for ScavTrap "
    << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy): ClapTrap(copy) {
    std::cout << "Copy constructor called for ScavTrap"
    << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other) {
    if (this != &other) {
        _name = other._name;
        _hitpoints = other._hitpoints;
        _energypoints = other._energypoints;
        _attackdamage = other._attackdamage;
    }
    std::cout << "Copy Assignment Operator called for ScavTrap" << std::endl;
    return (*this);
}

ScavTrap::~ScavTrap() {
    std::cout << "Destructor called for ScavTrap" << std::endl;
}

void    ScavTrap::attack(const std::string &target) {
    if (this->_energypoints > 0) {
        std::cout << "ScavTrap " << _name
        << " attacks " << target
        << ", causing " << _attackdamage
        << " points of damage!" << std::endl;

        this->_energypoints -= 1;

        std::cout << "ScavTrap " << _name
        << " has now " << _energypoints
        << " points of energy!" << std::endl;
        return ;
    }
    else {
        std::cout << "ScavTrap " << _name
        << " has no energy to attack!" << std::endl;
    }
}

void    ScavTrap::guardGate() {
    std::cout << "ScavTrap " << _name
    << " has enter in Gate keeper mode."
    << std::endl;
}