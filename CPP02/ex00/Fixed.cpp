#include "Fixed.hpp"

Fixed::Fixed() {
    this->_value = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed(void) {
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& copyConstructor) {
	this->_value = copyConstructor._value;
	std::cout << "Copy constructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& copyAssignment) {
	this->_value = copyAssignment._value;
	std::cout << "Copy assignment operator called" << std::endl;
	return (*this);
}

void Fixed::setRawBits(int const raw) {
	this->_value = raw;
    std::cout << "setRawBits called" << std::endl;
}

int Fixed::getRawBits(void) const {
    std::cout << "getRawBits member function called" << std::endl;
	return(this->_value);
}