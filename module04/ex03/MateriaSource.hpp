#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
    AMateria *_memory[4];
    int _materialCount;

public:
    MateriaSource();
    MateriaSource(MateriaSource const &obj);
    MateriaSource &operator=(MateriaSource const &obj);
    ~MateriaSource();

    void learnMateria(AMateria *);
    AMateria *createMateria(std::string const &type);
};

#endif
