#ifndef DOG_H
# define DOG_H

# include "Animal.hpp"

class   Dog:  public Animal {

    public:
        Dog();
        virtual ~Dog();
        Dog(const Dog &copy);
        Dog &operator=(const Dog &other);

        void makeSound() const;
};

#endif