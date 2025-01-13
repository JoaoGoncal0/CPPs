/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomendes <jomendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 12:04:28 by jomendes          #+#    #+#             */
/*   Updated: 2025/01/13 12:23:41 by jomendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void){
    FragTrap Hero1("Deku");
    FragTrap Hero2(Hero1);
    FragTrap Hero3("Kacchan");
    FragTrap Hero4("Todoroki");

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
    }
    std::cout << "\n                 -End of the Battle-\n" << std::endl;
    return (0);
}