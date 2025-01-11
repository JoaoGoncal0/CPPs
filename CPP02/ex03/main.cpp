#include "Point.hpp"

bool    bsp(Point const a, Point const b, Point const c, Point const point);

int main(void)
{
    Point a(0, 0);
    Point b(4, 4);
    Point c(2, 2);

    Point point(2, 6);
    bool var = bsp(a, b, c, point);

    if (var == true)
        std::cout << "point is inside triangle" << std::endl;
    else
        std::cout << "poit is outside triangle" << std::endl;
    return (0);
}