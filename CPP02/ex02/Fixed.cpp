#include "Fixed.hpp"

Fixed::Fixed(): _fixed(0) {
}

Fixed::~Fixed(void) {
}

Fixed::Fixed(const Fixed &copy) {
	*this = copy;
}

Fixed &Fixed::operator = (const Fixed &other) {
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
	_fixed = fixed << _bits;
}

int		Fixed::toInt(void) const {
	return (_fixed >> _bits);
}

Fixed::Fixed(const float number) {
	_fixed = roundf(number * (1 << _bits));
}

float	Fixed::toFloat(void) const {
	return (static_cast<float>(_fixed) / (1 << _bits));
}

bool    Fixed::operator>(const Fixed &other) const {
    return (_fixed > other._fixed);
}

bool    Fixed::operator<(const Fixed &other) const {
    return (_fixed < other._fixed);
}

bool    Fixed::operator>=(const Fixed &other) const {
    return (_fixed >= other._fixed);
}

bool    Fixed::operator<=(const Fixed &other) const {
    return (_fixed <= other._fixed);
}

bool    Fixed::operator==(const Fixed &other) const {
    return (_fixed == other._fixed);
}

bool    Fixed::operator!=(const Fixed &other) const {
    return (_fixed != other._fixed);
}

Fixed   Fixed::operator+(const Fixed &other) const {
    Fixed result;
    result.setRawBits(_fixed + other._fixed);
    return (result);
}

Fixed   Fixed::operator-(const Fixed &other) const {
    Fixed result;
    result.setRawBits(_fixed - other._fixed);
    return (result);
}

Fixed   Fixed::operator*(const Fixed &other) const {
    Fixed result;
    result.setRawBits((_fixed * other._fixed) >> _bits);
    return (result);
}

Fixed   Fixed::operator/(const Fixed &other) const {
    if (other._fixed == 0) {
        std::cerr << "Error: Division by zero" << std::endl;
        return (*this);
    }
    Fixed result;
    result.setRawBits((_fixed << _bits) / other._fixed);
    return (result);
}

Fixed& Fixed::operator++() {
    _fixed++;
    return (*this);
}

Fixed Fixed::operator++(int) {
    Fixed result(*this);
    this->_fixed++;
    return (result);
}

Fixed& Fixed::operator--() {
    _fixed--;
    return (*this);
}

Fixed Fixed::operator--(int) {
    Fixed result(*this);
    this->_fixed--;
    return (result);
}

const Fixed& Fixed::min(const Fixed &a, const Fixed &b) {
    return (a < b) ? a : b;
}

const Fixed& Fixed::max(const Fixed &a, const Fixed &b) {
    return (a > b) ? a : b;
}

Fixed& Fixed::min(Fixed &a, Fixed &b) {
    return (a < b) ? a : b;
}

Fixed& Fixed::max(Fixed &a,  Fixed &b) {
    return (a > b) ? a : b;
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed) {
	os << fixed.toFloat();
	return (os);
}