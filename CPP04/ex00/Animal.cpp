/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomendes <jomendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 15:40:50 by jomendes          #+#    #+#             */
/*   Updated: 2025/01/14 15:44:05 by jomendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {
    _type = "Animal";
    std::cout << "Constructor called (Animal)" << std::endl;
}

Animal::~Animal() {
    std::cout << "Destructor called (Animal)" << std::endl;
}

Animal::Animal(const Animal &copy) {
    this->_type = copy._type;
    std::cout << "Copy constructor called (Animal)" << std::endl;
}

Animal &Animal::operator=(const Animal &other) {
    if (this != &other) {
        this->_type = other._type;
    }
    std::cout << "Copy Assignments operator called (Animal)" << std::endl;
    return (*this);
}

std::string Animal::getType() const {
    return (_type);
}

void Animal::makeSound() const {
    std::cout << "Animal makes a sound!" << std::endl;
}
