#include "Point.hpp"

/// overload abs()
Fixed abs(Fixed num)
{
    if (num < 0)
        num = num * -1;
    return (num);
}

Fixed traingleArea(Point const &a, Point const &b, Point const &c)
{
    Fixed area = Fixed(0.5f) * (a.getX() * (b.getY() - c.getY()) + b.getX() * (c.getY() - a.getY()) + c.getX() * (a.getY() - b.getY())) ;
    return (abs(area));
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    Fixed triangleArea = traingleArea(a,b,c);

    Fixed area1 = traingleArea(a,b,point);
    Fixed area2 = traingleArea(b,c,point);
    Fixed area3 = traingleArea(a,c,point);

    if (triangleArea == area1 + area2 + area3 && area1 != 0 && area2 != 0  && area3 != 0)
        return (true);
    else
        return (false);
}