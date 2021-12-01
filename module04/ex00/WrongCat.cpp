#include "WrongCat.hpp"

WrongCat::WrongCat():WrongAnimal("WrongCat")
{
    std::cout << "WrongCat Constructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat const &obj):WrongAnimal(obj.type)
{
    std::cout << "WrongCat copy Constructor called" << std::endl;
}

WrongCat &WrongCat::operator=(WrongCat const &obj)
{
    std::cout << "WrongCat Assign operator called" << std::endl;
    if (this != &obj)
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