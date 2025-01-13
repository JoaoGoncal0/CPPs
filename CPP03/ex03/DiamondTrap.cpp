/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomendes <jomendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 13:12:15 by jomendes          #+#    #+#             */
/*   Updated: 2025/01/13 17:27:38 by jomendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() {
	std::cout << "Default Constructor called for DiamondTrap" << std::endl;	
}

DiamondTrap::DiamondTrap(std::string name):	ClapTrap(name + "_clap_name"), ScavTrap(), FragTrap() {
	_hitpoints = 100;
	_energypoints = 50;
	_attackdamage = 30;
	_name = name;
	std::cout << "Name constructor called for DiamondTrap" << std::endl;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "Destructor called for DiamondTrap" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy): ClapTrap(copy), ScavTrap(copy), FragTrap(copy) {
	_name = copy._name;
	std::cout << "Copy Constructor called for DiamondTrap" << std::endl;
}

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &other) {
	if (this != &other) {
		ClapTrap::operator=(other);
        ScavTrap::operator=(other);
        FragTrap::operator=(other);
		_name = other._name;
	}
	std::cout << "Copy Assignment operator called for DiamondTrap" << std::endl;
	return (*this);
}

void DiamondTrap::attack(std::string &target) {
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() {
	std::cout << "DiamondTrap Name: " << this->_name << std::endl;
	std::cout << "ClapTrap Name: " << ClapTrap::_name << std::endl;
}