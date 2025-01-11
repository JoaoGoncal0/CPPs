#include "Point.hpp"

float   vectorProduct(const Point &a, const Point &b, const Point &point) {
    return ((b.get_x() - a.get_x()) * (point.get_y() - a.get_y())
    - (b.get_y() - a.get_y()) * (point.get_x() - a.get_x()));
}

bool    bsp(Point const a, Point const b, Point const c, Point const point) {
    float edge1 = vectorProduct(a, b, point);
    float edge2 = vectorProduct(b, c, point); 
    float edge3 = vectorProduct(c, a, point); 

    bool all_negative = (edge1 < 0) || (edge2 < 0) || (edge3 < 0);
    bool all_positive = (edge1 > 0) || (edge2 > 0) || (edge3 > 0);

    return !(all_negative && all_positive);
}