/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomendes <jomendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 13:12:18 by jomendes          #+#    #+#             */
/*   Updated: 2025/01/13 17:27:40 by jomendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_H
# define DIAMONDTRAP_H

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class	DiamondTrap: virtual public ScavTrap, virtual public FragTrap {
	
	private:
		std::string _name;
	
	public:
		DiamondTrap();
		DiamondTrap(const DiamondTrap &copy);
		~DiamondTrap();
		DiamondTrap& operator=(const DiamondTrap &other);
		DiamondTrap(std::string name);
		void attack(std::string &target);
		void whoAmI();

};


#endif