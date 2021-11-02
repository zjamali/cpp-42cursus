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
    Fixed &operator++();
    Fixed operator++(int);
    Fixed &operator--();
    Fixed operator--(int);
    Fixed operator+(const Fixed obj) const;
    Fixed operator-(const Fixed obj) const;
    Fixed operator*(const Fixed obj) const;
    Fixed operator/(const Fixed obj) const;

    static Fixed const &max(const Fixed &a, const Fixed &b);
    static Fixed const &min(const Fixed &a, const Fixed &b);
};

std::ostream& operator<< (std::ostream& out, const Fixed& obj);
bool operator<(const Fixed &a, const Fixed &b);
bool operator>(const Fixed &a, const Fixed &b);
bool operator>=(const Fixed &a, const Fixed &b);
bool operator<=(const Fixed &a, const Fixed &b);
bool operator==(const Fixed &a, const Fixed &b);
bool operator!=(const Fixed &a, const Fixed &b);
#endif