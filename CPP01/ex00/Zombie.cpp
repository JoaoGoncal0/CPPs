#include "Zombie.hpp"

Zombie::Zombie(std::string zombie_name) {
    this->name = zombie_name;
}

Zombie::~Zombie(void) {
    std::cout << this->name << ": was destroyed" << std::endl;
}

void    Zombie::annouce(void) {
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
