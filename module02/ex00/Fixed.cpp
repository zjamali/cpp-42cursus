#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->_fixed = 0;
}

Fixed::Fixed( Fixed &obj)
{
    std::cout << "Copy constructor called" << std::endl;
    this->_fixed = obj.getRawBits();
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
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