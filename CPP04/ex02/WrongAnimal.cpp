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

std::string WrongAnimal::getType() const {
    return (_type);
}