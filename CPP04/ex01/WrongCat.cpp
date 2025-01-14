/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomendes <jomendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 17:48:01 by jomendes          #+#    #+#             */
/*   Updated: 2025/01/14 17:48:04 by jomendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() {
    _type = "WrongCat";
	_brain = new Brain();
    std::cout << "Constructor called (WrongCat)" << std::endl;
}

WrongCat::~WrongCat() {
	delete _brain;
    std::cout << "Destructor called (WrongCat)" << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy): WrongAnimal(copy) {
	_brain = new Brain(*copy._brain);
    std::cout << "Copy constructor called (WrongCat)" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &other) {
    if (this != &other) {
		delete _brain;
		_brain = new Brain(*other._brain);
        this->_type = other._type;
    }
    std::cout << "Copy Assignments operator called (WrongCat)" << std::endl;
    return (*this);
}

void WrongCat::makeSound() const {
    std::cout << "M E O W!" << std::endl;
}

void	WrongCat::setIdea(int index, std::string idea) {
	_brain->setIdea(index, idea);
}

std::string WrongCat::getIdea(int index) {
	return (_brain->getIdea(index));
}