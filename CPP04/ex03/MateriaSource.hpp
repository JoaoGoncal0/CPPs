#ifndef MATERIASOURCE_H
# define MATERIASOURCE_H

# include "IMateriaSource.hpp"
# include "AMateria.hpp"

class MateriaSource : public IMateriaSource {

    protected:
        AMateria *_materia[4];
    public:
        MateriaSource();
        ~MateriaSource();
        MateriaSource(const MateriaSource &copy);
        MateriaSource &operator=(const MateriaSource &other);

        void learnMateria(AMateria *m);
        AMateria *createMateria(std::string const &type);
};

#endif