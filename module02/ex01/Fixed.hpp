#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <cmath>

class Fixed
{
private:
    int _fixed;
    static const int _fraction = 8;
public:
    Fixed();
    Fixed( Fixed const &obj);
    Fixed( int const integerNumber );
    Fixed( float const floatNumber );
    ~Fixed();
    int getRawBits( void ) const;
    void setRawBits( int const raw );
    float toFloat( void ) const;
    int toInt( void ) const;
    Fixed &operator=( const Fixed &obj);
};

std::ostream& operator<< (std::ostream& out, const Fixed& obj);
#endif