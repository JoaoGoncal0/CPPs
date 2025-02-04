#ifndef ICE_H
# define ICE_H

# include "ICharacter.hpp"

class   Ice : public AMateria {

    public:
        Ice();
        Ice(std::string const &target);
        ~Ice();
        Ice(const Ice &copy);
        Ice &operator=(const Ice &other);

        AMateria *clone() const;
        void use(ICharacter &target);
};

#endif