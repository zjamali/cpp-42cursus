#include "Character.hpp"

Character::Character()
{
    //std::cout << "Charcter default constructor called" << std::endl;
    this->_name = std::string("Character");
    this->_materialCount = 0;
    for (int i = 0; i < 4; i++)
    {
        this->_inventory[i] = nullptr;
    }
}

Character::Character(std::string const name)
{
    //std::cout << "Charcter parametre constructor called" << std::endl;
    this->_name = name;
    _materialCount = 0;
    for (int i = 0; i < 4; i++)
    {
        this->_inventory[i] = nullptr;
    }
}

Character::Character(Character const &obj)
{
    //std::cout << "Charcter copy constructor called" << std::endl;
    *this = obj;
}

Character &Character::operator=(Character const &obj)
{
    if (this != &obj)
    {
        //std::cout << "Charcter assign constructor called" << std::endl;
        this->_name = obj._name;
        this->_materialCount = obj._materialCount;
        for (int i = 0; i < 4; i++)
        {
            delete this->_inventory[i];
            this->_inventory[i] = nullptr;
            if (obj._inventory[i] != nullptr)
                this->_inventory[i] = obj._inventory[i]->clone();
        }
    }
    return (*this);
}

Character::~Character()
{
    //std::cout << "Charcter  destructor called" << std::endl;
    for (int i = 0; i < _materialCount; i++)
        delete this->_inventory[i];
}

std::string const &Character::getName() const
{
    return this->_name;
}

void Character::equip(AMateria *m)
{
    if (this->_materialCount < 4)
    {
        this->_inventory[this->_materialCount] = m;
        this->_materialCount++;
    }
}

void Character::unequip(int idx)
{
    if (idx >= 0 && idx < this->_materialCount)
    {
        this->_inventory[idx] = nullptr;
        this->_materialCount--;
        for (int i = idx; i < this->_materialCount; i++)
            this->_inventory[i] = this->_inventory[i + 1];
    }
}

void Character::use(int idx, ICharacter &target)
{
    if (idx >= 0 && idx < this->_materialCount)
    {
        this->_inventory[idx]->use(target);
    }
}