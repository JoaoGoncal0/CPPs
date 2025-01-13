/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomendes <jomendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 12:04:20 by jomendes          #+#    #+#             */
/*   Updated: 2025/01/13 12:05:52 by jomendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): _name("Hero"), _hitpoints(10), _energypoints(10), _attackdamage(0) {
    std::cout << "Default Constructor called for ClapTrap " << _name << std::endl;
}

ClapTrap::~ClapTrap() {
    std::cout << "Destructor called for ClapTrap " << _name << std::endl;
}

ClapTrap::ClapTrap(std::string name): _name(name),  _hitpoints(10), _energypoints(10), _attackdamage(0) {
    std::cout << "Name Constructor called for ClapTrap " << _name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy) {
    this->_name = copy._name;
    this->_hitpoints = copy._hitpoints;
    this->_energypoints = copy._energypoints;
    this->_attackdamage = copy._attackdamage;
    std::cout << "Copy Constructor called for ClapTrap " << _name << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &other){
    if (this != &other) {
        this->_name = other._name;
        this->_hitpoints = other._hitpoints;
        this->_energypoints = other._energypoints;
        this->_attackdamage = other._attackdamage;
    }
    std::cout << "Copy Assignment Operator called for ClapTrap " << _name << std::endl;
    return (*this);
}

void    ClapTrap::attack(const std::string &target) {
    if (this->_energypoints > 0) {
        std::cout << "ClapTrap " << _name
        << " attacks " << target
        << ", causing " << _attackdamage
        << " points of damage!" << std::endl;

        this->_energypoints -= 1;

        std::cout << "ClapTrap " << _name
        << " has now " << _energypoints
        << " points of energy!" << std::endl;
        return ;
    }
    else {
        std::cout << "ClapTrap " << _name
        << " has no energy to attack!" << std::endl;
    }
}

void    ClapTrap::takeDamage(unsigned int amount) {
    std::cout << "ClapTrap " << _name
    << " took " << amount
    << " points of damage!" << std::endl;
    if (this->_hitpoints <= amount) {
        this->_hitpoints = 0;
        std::cout << "ClapTrap " << _name
        << " has now " << _hitpoints
        << " health points left!" << std::endl;
    }
    else {
        this->_hitpoints -= amount;
        std::cout << "ClapTrap " << _name
        << " has now " << _hitpoints
        << " health points left!" << std::endl;
    }
}

void    ClapTrap::beRepaired(unsigned int amount) {
    if (amount <= _energypoints) {
        std::cout << "ClapTrap " << _name
        << " is repaired for " << amount
        << " health points" << std::endl;
        this->_hitpoints += amount;
    if (this->_hitpoints > 100)
        this->_hitpoints = 100;
    this->_energypoints -= amount;
    std::cout << "ClapTrap " << _name
    << " has now " << _hitpoints
    << " health points left and " << _energypoints
    << " energy points left!" << std::endl;
    }
    else {
        std::cout << "ClapTrap " << _name
        << " has not the " << amount
        << " energy points to be repaired" << std::endl;
    }
}

unsigned int ClapTrap::getHitPoints() const {
    return (this->_hitpoints);
}