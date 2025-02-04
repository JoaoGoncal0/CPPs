#ifndef CURE_H
# define CURE_H

# include "ICharacter.hpp"

class   Cure : public AMateria {

    public:
        Cure();
        Cure(std::string const &target);
        ~Cure();
        Cure(const Cure &copy);
        Cure &operator=(const Cure &other);

        AMateria *clone() const;
        void use(ICharacter &target);

};

#endif