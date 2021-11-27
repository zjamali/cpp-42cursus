#include "Point.hpp"

Point::Point() : x(0),y(0)
{
}

Point::Point(Point const &obj)
{
    if (this == &obj)
        return ;
    *this = obj;
}

Point::Point(float x, float y) : x(x),y(y)
{
}

Point &Point::operator=(Point const &obj)
{
    new (this) Point(obj.x.toFloat(),obj.y.toFloat());
    return (*this);
}

Fixed const &Point::getX() const
{
    return (x);
}

Fixed const &Point::getY() const
{
    return (y);
}



Point::~Point()
{

}

