#ifndef FIXED_HPP
#define FIXED_HPP


#include <iostream>

class Fixed
{
private:
    int _fixed;
    static const int _fraction = 8;
public:
    Fixed();
    ~Fixed();
    Fixed(Fixed const &obj);
    int getRawBits( void ) const;
    void setRawBits(int const raw);

    Fixed &operator=(const Fixed &obj);
};

#endif