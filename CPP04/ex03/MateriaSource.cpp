#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
    for (int i = 0; i < 4; i++)
        _materia[i] = nullptr;
}

MateriaSource::~MateriaSource() {
    for (int i = 0; i < 4; i++)
        if (_materia[i])
            delete _materia[i];
}

MateriaSource::MateriaSource(const MateriaSource &copy) {
    for (int i = 0; i < 4; i++) {
        _materia[i] = (copy._materia[i] ? copy._materia[i]->clone() : nullptr);
    }
}

MateriaSource &MateriaSource::operator=(const MateriaSource &copy) {
    if (this != &copy) {
        for (int i = 0; i < 4; i++) {
            if (_materia[i]) delete _materia[i]; // Delete the existing materia
            _materia[i] = (copy._materia[i] ? copy._materia[i]->clone() : NULL); // Copy the new materia
        }
    }
    return *this;
}

void MateriaSource::learnMateria(AMateria *m)
{
    for (int i = 0; i < 4; i++) {
        if (_materia[i] == NULL) {
            _materia[i] = m;
            return;
        }
    }
}

AMateria* MateriaSource::createMateria(std::string const & type)
{

    for (int i = 0;i < 4; i++) {
        if (_materia[i] != NULL &&_materia[i]->getType() == type)
            return _materia[i]->clone();
    }
    return NULL;
}

