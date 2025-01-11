#ifndef POINT_H
# define POINT_H

# include "Fixed.hpp"

class   Point {

private:
    const Fixed _x;
    const Fixed _y;

public:
    Point();
    ~Point();
    Point(const float x, const float y);
    Point(const Point &copy);
    Point& operator=(const Point &other);
    float get_x() const;
    float get_y() const;
};

#endif