#include "Fixed.hpp"

Fixed::Fixed()
{
    // std::cout << "Default constructor called" << std::endl;
    this->_fixed = 0;
}

Fixed::Fixed( Fixed const &obj)
{
    // std::cout << "Copy constructor called" << std::endl;
    if (this == &obj)
        return ;
    *this  = obj;
}

Fixed::~Fixed()
{
    // std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed( int const integerNumber)
{
    // std::cout<< "Int constructor called" << std::endl;
    this->_fixed = integerNumber << this->_fraction;
}

Fixed::Fixed( float const floatNumber)
{
    // std::cout << "Float constructor called" << std::endl;
    this->_fixed = roundf(floatNumber * (1 << this->_fraction));
}

float Fixed::toFloat( void ) const
{
    return ((float)this->_fixed / (1 << this->_fraction));
}

int Fixed::toInt( void ) const
{
    return (this->_fixed >> 8);
}

int Fixed::getRawBits(void) const
{
    // std::cout << "getRawBits member function called" << std::endl;
    return (this->_fixed);
}

void Fixed::setRawBits(int const raw)
{
    this->_fixed = raw;
}

const  Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
    if (a._fixed >= b._fixed)
        return (a);
    else
        return (b);
}

const  Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
    if (a._fixed <= b._fixed)
        return (a);
    else
        return (b);
}

Fixed &Fixed::operator=( const Fixed &obj)
{
    // std::cout << "Assignation operator called" << std::endl; 
    this->_fixed = obj.getRawBits();
    return (*this);
}

Fixed Fixed::operator++(int){
    Fixed old = *this;
    ++*this;
    return (old);
}

Fixed &Fixed::operator++(){
    this->_fixed = this->_fixed + 1;
    return (*this);
}

Fixed Fixed::operator--(int){
    Fixed old = *this;
    --*this;
    return (old);
}

Fixed &Fixed::operator--(){
    this->_fixed = this->_fixed - 1;
    return (*this);
}

Fixed Fixed::operator+(const Fixed &obj) const {
    Fixed newObj;
    newObj._fixed = this->_fixed + obj._fixed;
    return (newObj);
}

Fixed Fixed::operator-(const Fixed &obj) const {
    Fixed newObj;

    newObj._fixed = this->_fixed - obj._fixed;
    return (newObj);
}

Fixed Fixed::operator*(const Fixed &obj) const {
    Fixed newObj;

    newObj._fixed = (int)(((long)this->_fixed * (long)obj._fixed) >> this->_fraction);
    return (newObj);
}

Fixed Fixed::operator/(const Fixed &obj) const {
    Fixed newObj;

    newObj._fixed = (int)((((long) this->_fixed) << this->_fraction) / obj._fixed) ;
    return (newObj);
}

std::ostream& operator<< (std::ostream& out, const Fixed& obj)
{
    out << obj.toFloat() ;
    return out;
}

bool  operator<(const Fixed &a, const Fixed &b)
{
    if (a.getRawBits() < b.getRawBits())
        return (true);
    else
        return (false);
}

bool  operator>(const Fixed &a, const Fixed &b)
{
    if (a.getRawBits() > b.getRawBits())
        return (true);
    else
        return (false);
}

bool  operator<=(const Fixed &a, const Fixed &b)
{
    if (a.getRawBits() <= b.getRawBits())
        return (true);
    else
        return (false);
}

bool operator>=(const Fixed &a, const Fixed &b)
{
    if (a.getRawBits() >= b.getRawBits())
        return (true);
    else
        return (false);
}

bool  operator==(const Fixed &a, const Fixed &b)
{
    if (a.getRawBits() == b.getRawBits())
        return (true);
    else
        return (false);
}

bool  operator!=(const Fixed &a, const Fixed &b)
{
    if (a.getRawBits() != b.getRawBits())
        return (true);
    else
        return (false);
}