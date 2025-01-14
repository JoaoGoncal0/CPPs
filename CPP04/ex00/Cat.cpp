#include "Cat.hpp"


Cat::Cat() {
    _type = "Cat";
    std::cout << "Constructor called (Cat)" << std::endl;
}

Cat::~Cat() {
    std::cout << "Destructor called (Cat)" << std::endl;
}

Cat::Cat(const Cat &copy): Animal(copy) {
    std::cout << "Copy constructor called (Cat)" << std::endl;
}

Cat &Cat::operator=(const Cat &other) {
    if (this != &other) {
        this->_type = other._type;
    }
    std::cout << "Copy Assignments operator called (Cat)" << std::endl;
    return (*this);
}

void Cat::makeSound() const {
    std::cout << "M E O W!" << std::endl;
}

