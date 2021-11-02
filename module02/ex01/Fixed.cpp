#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->_fixed = 0;
}

Fixed::Fixed( Fixed const &obj)
{
    std::cout << "Copy constructor called" << std::endl;
    //this->_fixed = obj.getRawBits();
    *this  = obj;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed( int const integerNumber)
{
    std::cout<< "Int constructor called" << std::endl;
    this->_fixed = integerNumber << this->_fraction;
}

Fixed::Fixed( float const floatNumber)
{
    std::cout << "Float constructor called" << std::endl;
    this->_fixed = floatNumber * (1 << this->_fraction);
}

float Fixed::toFloat( void ) const
{
    return (this->_fixed / (1 << this->_fraction));
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

Fixed &Fixed::operator=( const Fixed &obj)
{
    std::cout << "Assignation operator called" << std::endl; 
    this->_fixed = obj.getRawBits();
    return (*this);
}
