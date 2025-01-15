/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomendes <jomendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 15:45:01 by jomendes          #+#    #+#             */
/*   Updated: 2025/01/14 17:46:42 by jomendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
    _type = "Cat";
	_brain = new Brain();
    std::cout << "Constructor called (Cat)" << std::endl;
}

Cat::~Cat() {
	delete _brain;
    std::cout << "Destructor called (Cat)" << std::endl;
}

Cat::Cat(const Cat &copy): Animal(copy) {
	_brain = new Brain(*copy._brain);
    std::cout << "Copy constructor called (Cat)" << std::endl;
}

Cat &Cat::operator=(const Cat &other) {
    if (this != &other) {
		delete _brain;
		_brain = new Brain(*other._brain);
        this->_type = other._type;
    }
    std::cout << "Copy Assignments operator called (Cat)" << std::endl;
    return (*this);
}

void Cat::makeSound() const {
    std::cout << "MEOW!" << std::endl;
}

void	Cat::setIdea(int index, std::string idea) {
	_brain->setIdea(index, idea);
}

std::string Cat::getIdea(int index) {
	return (_brain->getIdea(index));
}