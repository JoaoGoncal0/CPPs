#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main(void) {
{
        Weapon club = Weapon("crude spiked club");
        HumanA spong("SpongBob", club);
        spong.attack();
        club.setType("Some other type of club");
        spong.attack();
    }
    {
        Weapon club = Weapon("crude spiked club");
        HumanB Patrick("Patrick");
        Patrick.attack();
        Patrick.setWeapon(club);
        Patrick.attack();
        club.setType("Some other type of club");
        Patrick.attack();
    }
    return (0);
}