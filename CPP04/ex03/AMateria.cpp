#include "AMateria.hpp"

AMateria::AMateria() {
    _type = "empty";
}

AMateria::~AMateria() {
}

AMateria::AMateria(const AMateria &copy) {
    _type = copy._type;
}

AMateria &AMateria::operator=(const AMateria &other) {
    if (this != &other)
        _type = other._type;
    return (*this);
}

AMateria::AMateria(std::string const & type) {
    _type = type;
}

const std::string &AMateria::getType() const {
    return (_type);
}

void    AMateria::use(ICharacter &target) {
    if (target.getName() == "ice")
        std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
    else if (target.getName() == "cure")
        std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}