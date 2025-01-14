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
    std::cout << "Ã O Ã O!" << std::endl;
}
