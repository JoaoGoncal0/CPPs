#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {
}

Ice::~Ice() {
}

Ice::Ice(std::string const &type) : AMateria(type) {
}

Ice::Ice(const Ice &copy) : AMateria(copy) {
}

Ice &Ice::operator=(const Ice &other) {
    if (this != &other)
        AMateria::operator=(other);
    return (*this);
}

AMateria* Ice::clone() const {
    return new Ice(*this);
}

void Ice::use(ICharacter &target) {
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}