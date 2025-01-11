#ifndef FIXED_H
# define FIXED_H

# include <iostream>
# include <string>

class   Fixed {

private:
    int _value;
    static const int bits = 8;

public:
    Fixed();
    ~Fixed(void);
    Fixed(const Fixed &copyConstructor);
    Fixed &operator=(const Fixed &copyAssignment);
    void setRawBits(int const raw_bits);
    int getRawBits(void) const;
};

#endif