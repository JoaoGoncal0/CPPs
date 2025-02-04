#ifndef CHARACTER_H
# define CHARACTER_H

# include "ICharacter.hpp"

class   Character : public ICharacter {

    protected:
        std::string _name;
        AMateria *_materia[4];
    public:
        Character();
        Character(std::string name);
        ~Character();
        Character(const Character &copy);
        Character &operator=(const Character &other);

        std::string const &getName() const;
        void equip(AMateria *m);
        void unequip(int idx);
        void use(int idx, ICharacter &targer);
};

#endif