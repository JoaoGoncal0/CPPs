#include "Dog.hpp"

Dog::Dog() {
    _type = "Dog";
	_brain = new Brain();
    std::cout << "Constructor called (Dog)" << std::endl;
}

Dog::~Dog() {
	delete _brain;
    std::cout << "Destructor called (Dog)" << std::endl;
}

Dog::Dog(const Dog &copy): Animal(copy) {
	_brain = new Brain(*copy._brain);
    std::cout << "Copy constructor called (Dog)" << std::endl;
}

Dog &Dog::operator=(const Dog &other) {
    if (this != &other) {
		delete _brain;
		_brain = new Brain(*other._brain);
        this->_type = other._type;
    }
    std::cout << "Copy Assignments operator called (Dog)" << std::endl;
    return (*this);
}

void Dog::makeSound() const {
    std::cout << "WOOF!" << std::endl;
}

void	Dog::setIdea(int index, std::string idea) {
	_brain->setIdea(index, idea);
}

std::string Dog::getIdea(int index) {
	return (_brain->getIdea(index));
}