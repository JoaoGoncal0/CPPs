/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomendes <jomendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 15:44:53 by jomendes          #+#    #+#             */
/*   Updated: 2025/01/14 17:08:53 by jomendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
    _type = "WrongAnimal";
    std::cout << "Constructor called (WrongAnimal)" << std::endl;
}

WrongAnimal::~WrongAnimal() {
    std::cout << "Destructor called (WrongAnimal)" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy) {
    this->_type = copy._type;
    std::cout << "Copy constructor called (WrongAnimal)" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other) {
    if (this != &other) {
        this->_type = other._type;
    }
    std::cout << "Copy Assignments operator called (WrongAnimal)" << std::endl;
    return (*this);
}

void WrongAnimal::makeSound() const {
    std::cout << "WrongAnimal makes a sound!" << std::endl;
}

std::string WrongAnimal::getType() const {
    return (_type);
}