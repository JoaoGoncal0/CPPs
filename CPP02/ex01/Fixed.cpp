#include "Fixed.hpp"

Fixed::Fixed(): _fixed(0) {
	std::cout << "Default Constructor called" << std::endl;
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy) {
	std::cout << "Copy Constructor called" << std::endl;
	*this = copy;
}

Fixed &Fixed::operator = (const Fixed &other) {
	std::cout << "Copy Assignment Operator called" << std::endl;
	if (this != &other)
		this->_fixed = other.getRawBits();
	return (*this);
}

void	Fixed::setRawBits(const int raw) {
	this->_fixed = raw;
}

int		Fixed::getRawBits(void) const {
	return (_fixed);
}

Fixed::Fixed(const int fixed) {
	std::cout << "Int Constructor called" << std::endl;
	_fixed = fixed << _bits;
}

int		Fixed::toInt(void) const {
	return (_fixed >> _bits);
}

Fixed::Fixed(const float number) {
	std::cout << "Float Constructor called" << std::endl;
	_fixed = roundf(number * (1 << _bits));
}

float	Fixed::toFloat(void) const {
	return (static_cast<float>(_fixed) / (1 << _bits));
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed) {
	os << fixed.toFloat();
	return (os);
}