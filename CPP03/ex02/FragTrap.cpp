/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomendes <jomendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 12:04:22 by jomendes          #+#    #+#             */
/*   Updated: 2025/01/13 12:20:22 by jomendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap() {
	_hitpoints = 100;
	_energypoints = 100;
	_attackdamage = 30;
	std::cout << "Default constructor called for FragTrap" << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name) {
	_name = name;
	_hitpoints = 100;
	_energypoints = 100;
	_attackdamage = 30;
	std::cout << "Name constructor called for FragTrap" << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "Destructor called for FragTrap" << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy): ClapTrap(copy) {
	std::cout << "Copy constructor called for FragTrap" << std::endl;
}

FragTrap	&FragTrap::operator=(const FragTrap &other) {
	 if (this != &other) {
     _name = other._name;
     _hitpoints = other._hitpoints;
     _energypoints = other._energypoints;
     _attackdamage = other._attackdamage;
    }
    std::cout << "Copy Assignment Operator called for FragTrap" << std::endl;
    return (*this);
}

void	FragTrap::highFivesGuys(void) {
	std::cout << "FragTrap requested a Hi 5 :)" << std::endl;
}