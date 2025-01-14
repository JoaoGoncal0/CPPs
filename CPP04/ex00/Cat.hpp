#ifndef Cat_H
# define CAT_H

# include "Animal.hpp"

class   Cat:  public Animal {

    public:
        Cat();
        virtual ~Cat();
        Cat(const Cat &copy);
        Cat &operator=(const Cat &other);

        void makeSound() const;
};

#endif