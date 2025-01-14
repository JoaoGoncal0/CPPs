/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomendes <jomendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 15:41:04 by jomendes          #+#    #+#             */
/*   Updated: 2025/01/14 17:43:06 by jomendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
    _type = "Dog";
    std::cout << "Constructor called (Dog)" << std::endl;
}

Dog::~Dog() {
    std::cout << "Destructor called (Dog)" << std::endl;
}

Dog::Dog(const Dog &copy): Animal(copy) {
    std::cout << "Copy constructor called (Dog)" << std::endl;
}

Dog &Dog::operator=(const Dog &other) {
    if (this != &other) {
        this->_type = other._type;
    }
    std::cout << "Copy Assignments operator called (Dog)" << std::endl;
    return (*this);
}

void Dog::makeSound() const {
    std::cout << "WOOF!" << std::endl;
}
