#include "Zombie.hpp"

Zombie::Zombie(void) {
     std::cout << "A Zombie was created" << std::endl;
}

Zombie::~Zombie(void) {
     std::cout << this->name << ": was destroyed" << std::endl;
}

void    Zombie::annouce(void) {
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void    Zombie::setName(std::string zombie_name) {
    this->name = zombie_name;
}