/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomendes <jomendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 12:05:21 by jomendes          #+#    #+#             */
/*   Updated: 2025/01/13 12:24:36 by jomendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void){
    ClapTrap Hero1("Deku");
    ClapTrap Hero2(Hero1);
    ClapTrap Hero3("Kacchan");
    ClapTrap Hero4("Todoroki");

    Hero4 = Hero3;

    std::string enemy = "Shigaraki";

	std::cout << "\n                 -Start of the Battle-\n" << std::endl;
    while(Hero1.getHitPoints() > 0)
    {
        Hero1.attack(enemy);
        Hero1.takeDamage(3);
        if (Hero1.getHitPoints() == 0)
            break;
        Hero1.beRepaired(2);
    }
	std::cout << "\n                 -End of the Battle-\n" << std::endl;
    return (0);
}