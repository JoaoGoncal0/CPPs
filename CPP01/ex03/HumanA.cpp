#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : name(name), weapon(weapon) {
    std::cout << this->name 
    << " is alive and armed with "
    << this->weapon.getType()
    << std::endl;
}

HumanA::~HumanA(void) {
    std::cout << this->name
    << " got smoked, RIP HumanA"
    << std::endl;
}

void    HumanA::attack(void) {
    std::cout << this->name
    << " attacks with "
    << this->weapon.getType()
    << std::endl;
}

void    HumanA::setWeapon(Weapon &weapon) {
    this->weapon = weapon;
}