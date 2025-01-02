#include "Zombie.hpp"

int main(void) {
    Zombie *horde = zombieHorde(2, "Ukuleles");
    delete []horde;
}