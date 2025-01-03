#include "HumanB.hpp"

HumanB::HumanB(std::string name): name(name), isArmed(false) {
    std::cout << this->name 
    << " is alive and not armed at all."
    << std::endl;
}

HumanB::~HumanB(void) {
    std::cout << this->name
    << " got smoked, RIP HumanB"
    << std::endl;
}

void    HumanB::attack(void) {
    std::cout << this->name
    << " attacks with his "
    << (isArmed ? weapon->getType() : "fists")
    << "." << std::endl;
}

void    HumanB::setWeapon(Weapon &weapon) {
    this->weapon = &weapon;
    this->isArmed = true;
}