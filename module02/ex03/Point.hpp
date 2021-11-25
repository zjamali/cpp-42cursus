#ifndef POINT_HPP
#define POINT_HPP
#include "Fixed.hpp"

class Point
{
private:
    Fixed const x;
    Fixed const y;
    
public:
    Point();
    Point(Point const &obj);
    Point(float x, float y);
    Point &operator=(Point const &obj);

    ~Point();
};

bool bsp( Point const a, Point const b, Point const c, Point const point);
#endif