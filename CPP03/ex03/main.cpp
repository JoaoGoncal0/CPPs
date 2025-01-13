/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomendes <jomendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 13:12:27 by jomendes          #+#    #+#             */
/*   Updated: 2025/01/13 17:21:56 by jomendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "DiamondTrap.hpp"

int main(void){
    DiamondTrap Hero1("Deku");
    DiamondTrap Hero2(Hero1);
    DiamondTrap Hero3("Kacchan");
    DiamondTrap Hero4("Todoroki");

    Hero1 = Hero4;

    std::string enemy = "Shigaraki";

    std::cout << "\n                 -Start of the Battle-\n" << std::endl;
    while(Hero1.getHitPoints() > 0)
    {
        Hero1.attack(enemy);
        Hero1.takeDamage(50);
        if (Hero1.getHitPoints() == 0)
            break;
        Hero1.beRepaired(15);
        Hero1.highFivesGuys();
		Hero1.guardGate();
		Hero1.whoAmI();
    }
    std::cout << "\n                 -End of the Battle-\n" << std::endl;
    return (0);
}