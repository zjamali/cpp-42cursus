#include "Point.hpp"

int main()
{
    {
        std::cout << "test point inside traingle : " << std::endl;
        Point p1(0, 0), p2(20, 0), p3(10, 30);
        Point p(10, 15);
        if (bsp(p1, p2, p3, p))
            std::cout << "          Point is inside the triangle.";
        else
            std::cout << "          Point is not inside the triangle";
    }
    std::cout << std::endl;
    {
        std::cout << "test point in the traingle edge : " << std::endl;
        Point p1(4, 4), p2(4, 2), p3(6, 2);
        Point p(5, 3);
        if (bsp(p1, p2, p3, p))
            std::cout << "          Point is inside the triangle.";
        else
            std::cout << "          Point is not inside the triangle";
    }
    std::cout << std::endl;
    {
        std::cout << "test point outside the triangle : " << std::endl;
        Point p1(4, 4), p2(4, 2), p3(6, 2);
        Point p(4.66, 3.44);
        if (bsp(p1, p2, p3, p))
            std::cout << "          Point is inside the triangle.";
        else
            std::cout << "          Point is not inside the triangle";
    }
}