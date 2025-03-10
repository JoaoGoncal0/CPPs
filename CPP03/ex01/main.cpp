/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomendes <jomendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 12:04:54 by jomendes          #+#    #+#             */
/*   Updated: 2025/01/13 12:24:10 by jomendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void){
    ScavTrap Hero1("Deku");
    ScavTrap Hero2(Hero1);
    ScavTrap Hero3("Kacchan");
    ScavTrap Hero4("Todoroki");

    Hero1 = Hero4;

    std::string enemy = "Shigaraki";

    std::cout << "\n                 -Start of the Battle-\n" << std::endl;
    while(Hero1.getHitPoints() > 0)
    {
        Hero1.attack(enemy);
        Hero1.takeDamage(30);
        if (Hero1.getHitPoints() == 0)
            break;
        Hero1.beRepaired(5);
        Hero1.guardGate();
    }
	std::cout << "\n                 -End of the Battle-\n" << std::endl;
    return (0);
}