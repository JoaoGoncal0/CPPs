#include "Weapon.hpp"

Weapon::Weapon(const std::string &weapon) {
    this->setType(weapon);
}

Weapon::~Weapon() {
    std::cout << this->getType() << " not working" << std::endl;
}

void    Weapon::setType(const std::string &weapon) {
    type = weapon;
}

std::string Weapon::getType() const {
    return (type);
}