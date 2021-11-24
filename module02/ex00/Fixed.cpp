#include "Fixed.hpp"

Fixed::Fixed() : _fixed(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( Fixed const &obj)
{
    std::cout << "Copy constructor called" << std::endl;
    if (this == &obj)
        return ;
    *this = obj;
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
