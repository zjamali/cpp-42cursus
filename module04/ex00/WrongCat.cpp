#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "WrongCat Constructor called" << std::endl;
    this->type = "WrongCat";
}

WrongCat::WrongCat(WrongCat const &obj)
{
    std::cout << "WrongCat copy Constructor called" << std::endl;
    if (this != &obj)
        (*this) = obj;
}

WrongCat &WrongCat::operator=(WrongCat const &obj)
{
    std::cout << "WrongCat Assign operator called" << std::endl;
    this->type = obj.type;
    return (*this);
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destuctor called" << std::endl;
}

void WrongCat::makeSound(void) const
{
    std::cout << "Wrong cat sound???" << std::endl;
}