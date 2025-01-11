#include "ClapTrap.hpp"

int main(void){
    ClapTrap Hero1("Deku");
    ClapTrap Hero2(Hero1);
    ClapTrap Hero3("Kacchan");
    ClapTrap Hero4("Todoroki");

    Hero4 = Hero3;

    std::string enemy = "Shigaraki";

    while(Hero1.getHitPoints() > 0)
    {
        Hero1.attack(enemy);
        Hero1.takeDamage(3);
        if (Hero1.getHitPoints() == 0)
            break;
        Hero1.beRepaired(2);
    }
    return (0);
}