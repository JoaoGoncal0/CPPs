#include "Character.hpp"

Character::Character() {
    _name = "empty";
    for (int i = 0; i < 4; i++)
        _materia[i] = nullptr;
}

Character::~Character() {
    for (int i = 0; i < 4; i++)
        if (_materia[i])
            delete _materia[i];
}

Character::Character(std::string name) : _name(name) {
    for (int i = 0; i < 4; i++)
        _materia[i] = nullptr;
}

Character::Character(const Character &copy) : _name(copy._name) {
    for (int i = 0; i < 4; i++) {
        if (copy._materia[i])
            _materia[i] = copy._materia[i]->clone();
        else
            _materia[i] = nullptr;
    }
}


Character &Character::operator=(const Character &other) {
    if (this != &other) {
        _name = other._name;

        for (int i = 0; i < 4; i++) {
            if (_materia[i])
                delete _materia[i];
        }

        for (int i = 0; i < 4; i++) {
            if (other._materia[i])
                _materia[i] = other._materia[i]->clone();
            else
                _materia[i] = nullptr;
        }
    }
    return (*this);
}

std::string const &Character::getName() const {
    return _name;
}

void Character::equip(AMateria *m) {
    for (int i = 0; i < 4; i++) {
        if (_materia[i] == nullptr) {
            _materia[i] = m;
            return;
        }
    }
}

void Character::unequip(int idx) {
    if (idx >= 0 && idx < 4) {
        delete _materia[idx];
        _materia[idx] = nullptr;
    }
}

void Character::use(int idx, ICharacter &target) {
    if (idx >= 0 && idx < 4 && _materia[idx] != nullptr)
        _materia[idx]->use(target);
    else
        std::cout << "* nothing to use at index " << idx << " *" << std::endl;
}