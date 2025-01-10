#include "Fixed.hpp"

Fixed::Fixed(): _fixed(0) {
	std::cout << "Fixed Default Constructor called" << std::endl;
}

Fixed::~Fixed(void) {
	std::cout << "Fixed Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy) {
	*this = copy;
	std::cout << "Fixed Copy Constructor called" << std::endl;
}

Fixed &Fixed::operator = (const Fixed &other) {
	std::cout << "Copy Assignment Operator called" << std::endl;
	if (this != &other)
		this->_fixed = other.getRawBits();
	return (*this);
}

void	Fixed::setRawBits(const int raw) {
	std::cout << "setRawBits fucntion called" << std::endl;
	this->_fixed = raw;
}

int		Fixed::getRawBits(void) const {
	std::cout << "getRawBits function called" << std:: endl;
	return (_fixed);
}

int		Fixed::toInt(void) const {
	return (_fixed >> _bits);
}