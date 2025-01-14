#include "WrongCat.hpp"

WrongCat::WrongCat() {
    _type = "WrongCat";
    std::cout << "Constructor called (WrongCat)" << std::endl;
}

WrongCat::~WrongCat() {
    std::cout << "Destructor called (WrongCat)" << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy): WrongAnimal(copy) {
    std::cout << "Copy constructor called (WrongCat)" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &other) {
    if (this != &other) {
        this->_type = other._type;
    }
    std::cout << "Copy Assignments operator called (WrongCat)" << std::endl;
    return (*this);
}

void WrongCat::makeSound() const {
    std::cout << "YOROLE YOROLE!" << std::endl;
}
