/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomendes <jomendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 13:12:33 by jomendes          #+#    #+#             */
/*   Updated: 2025/01/13 17:20:37 by jomendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H

# include "ClapTrap.hpp"

class   ScavTrap : virtual public ClapTrap {

public:
    ScavTrap();
    ~ScavTrap();
    ScavTrap(const ScavTrap &copy);
    ScavTrap& operator=(const ScavTrap &other);
    ScavTrap(std::string name);
    void    attack(const std::string &target);
    void    guardGate();
};

#endif