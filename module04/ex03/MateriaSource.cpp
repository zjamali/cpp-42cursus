#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    // std::cout << "MaterialSource default constructor called" << std::endl;
    this->_materialCount = 0;
    for (int i = 0; i < 4; i++)
    {
        this->_memory[i] = nullptr;
    }
}
MateriaSource::MateriaSource(MateriaSource const &obj)
{
    // std::cout << "MaterialSource copy constructor called" << std::endl;
    *this = obj;
}
MateriaSource &MateriaSource::operator=(MateriaSource const &obj)
{
    if (this != &obj)
    {
        // std::cout << "MaterialSource assign operator called" << std::endl;
        this->_materialCount = obj._materialCount;
        for (int i = 0; i < 4; i++)
        {
            delete _memory[i];
            this->_memory[i] = obj._memory[i];
        }
    }
    return (*this);
}

void MateriaSource::learnMateria(AMateria *m)
{
    if (this->_materialCount < 4)
    {
        this->_memory[this->_materialCount] = m;
        this->_materialCount++;
    }
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
    for (int i = 0; i < this->_materialCount; i++)
    {
        if (this->_memory[i]->getType() == type)
        {
            return (this->_memory[i]->clone());
        }
    }
    return (nullptr);
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < this->_materialCount; i++)
        delete this->_memory[i];
    // std::cout << "MaterialSource destructor called" << std::endl;
}