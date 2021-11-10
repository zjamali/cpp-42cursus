#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    std::cout << "MaterialSource default constructor called" << std::endl;
    this->_materialCount = 0;
}
MateriaSource::MateriaSource(MateriaSource const &obj)
{
    std::cout << "MaterialSource copy constructor called" << std::endl;
    *this = obj;
}
MateriaSource &MateriaSource::operator=(MateriaSource const &obj)
{
    std::cout << "MaterialSource assign operator called" << std::endl;
    this->_materialCount = obj._materialCount;
    for (int i = 0; i < _materialCount; i++)
    {
        this->_memory[i] = obj._memory[i]->clone();
    }
}

void MateriaSource::learnMateria(AMateria *m)
{
    if (this->_materialCount < 4)
    {
        this->_memory[this->_materialCount] = m->clone();
        this->_materialCount++;
    }
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
    for (int i = 0; i < this->_materialCount ; i++)
    {
        if (this->_memory[i]->getType() == type)
        {
            return (this->_memory[i]->clone());
        }        
    }
    return (0);
}

MateriaSource::~MateriaSource()
{
    std::cout << "MaterialSource destructor called" << std::endl;
}