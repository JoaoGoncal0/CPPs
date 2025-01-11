#ifndef FIXED_H
# define FIXED_H

# include <iostream>
# include <string>
# include <cmath>


class	Fixed {

private:
	static const int _bits = 8;
	int _fixed;

public:
	Fixed();
	Fixed(const int fixed);
	Fixed(const float number);
	Fixed(const Fixed &copy);
    Fixed &operator = (const Fixed &other);
	~Fixed();

	void	setRawBits(int const raw);
	int		getRawBits(void) const;
	int		toInt(void) const;
	float	toFloat(void) const;
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif